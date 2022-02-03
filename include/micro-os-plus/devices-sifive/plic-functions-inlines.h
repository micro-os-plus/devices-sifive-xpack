/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2017 Liviu Ionescu.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/MIT/.
 */

#ifndef SIFIVE_DEVICES_PLIC_FUNCTIONS_INLINES_H_
#define SIFIVE_DEVICES_PLIC_FUNCTIONS_INLINES_H_

// ----------------------------------------------------------------------------

#include <micro-os-plus/devices-sifive/defines.h>

#include <stdint.h>

// ----------------------------------------------------------------------------
// Inline implementations for the Core Complex IP support functions.

#if defined(__cplusplus)
extern "C"
{
#endif // defined(__cplusplus)

  // --------------------------------------------------------------------------
  // Device PLIC support functions in C.
  // Assume there is a single target (target0), corresponding to Hart 0.

  static inline __attribute__ ((always_inline)) riscv_plic_priority_t
  riscv_plic_write_threshold (riscv_plic_priority_t priority)
  {
    riscv_plic_priority_t previous = PLIC->target0.m.threshold;
    PLIC->target0.m.threshold = priority;

    return previous;
  }

  static inline __attribute__ ((always_inline)) riscv_plic_priority_t
  riscv_plic_read_threshold (void)
  {
    return PLIC->target0.m.threshold;
  }

  static inline __attribute__ ((always_inline)) void
  riscv_plic_enable_interrupt (riscv_plic_source_t global_interrupt_id)
  {
    PLIC->enablestarget0.m.enables[global_interrupt_id / 32u]
        = PLIC->enablestarget0.m.enables[global_interrupt_id / 32u]
          | (1u << (global_interrupt_id % 32u));
  }

  static inline __attribute__ ((always_inline)) void
  riscv_plic_disable_interrupt (riscv_plic_source_t global_interrupt_id)
  {
    PLIC->enablestarget0.m.enables[global_interrupt_id / 32u]
        = PLIC->enablestarget0.m.enables[global_interrupt_id / 32u]
          & ~(1u << (global_interrupt_id % 32u));
  }

  static inline __attribute__ ((always_inline)) bool
  riscv_plic_is_interrupt_enabled (riscv_plic_source_t global_interrupt_id)
  {
    return (PLIC->enablestarget0.m.enables[global_interrupt_id / 32u]
            & ~(1u << (global_interrupt_id % 32u)))
           != 0;
  }

  static inline __attribute__ ((always_inline)) void
  riscv_plic_write_priority (riscv_plic_source_t global_interrupt_id,
                             riscv_plic_priority_t priority)
  {
    PLIC->priorities[global_interrupt_id] = priority;
  }

  static inline __attribute__ ((always_inline)) uint32_t
  riscv_plic_read_priority (riscv_plic_source_t global_interrupt_id)
  {
    return PLIC->priorities[global_interrupt_id];
  }

  static inline __attribute__ ((always_inline)) riscv_plic_source_t
  riscv_plic_claim_interrupt (void)
  {
    return PLIC->target0.m.claimcomplete;
  }

  static inline __attribute__ ((always_inline)) void
  riscv_plic_complete_interrupt (riscv_plic_source_t global_interrupt_id)
  {
    PLIC->target0.m.claimcomplete = global_interrupt_id;
  }

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)

// ----------------------------------------------------------------------------

#if defined(__cplusplus)

namespace riscv
{
  namespace plic
  {
    // ------------------------------------------------------------------------
    // Device PLIC support functions in C++.

    /**
     * @details
     * The E31 Core Complex supports setting of a interrupt priority
     * threshold via the threshold register. The threshold is a
     * WARL field, where the E31 Core Complex supports a maximum
     * threshold of 7.
     *
     * The E31 Core Complex will mask all PLIC interrupts of a priority
     * less than or equal to threshold. For example, a threshold
     * value of zero permits all interrupts with non-zero priority,
     * whereas a value of 7 masks all interrupts.
     */
    inline __attribute__ ((always_inline)) priority_t
    threshold (priority_t priority)
    {
      return riscv_plic_write_threshold (priority);
    }

    inline __attribute__ ((always_inline)) priority_t
    threshold (void)
    {
      return riscv_plic_read_threshold ();
    }

    /**
     * Each global interrupt can be enabled by setting the
     * corresponding bit in the enables register. The enables
     * registers are accessed as a contiguous array of 8x32-bit
     * words, packed the same way as the pending bits. Bit 0 of
     * enable word 0 represents the non-existent interrupt ID 0
     * and is hardwired to 0.
     *
     * Only 32-bit word accesses are supported by the enables
     * array in SiFive RV32 systems.
     */
    inline __attribute__ ((always_inline)) void
    enable_interrupt (source_t global_interrupt_id)
    {
      riscv_plic_enable_interrupt (global_interrupt_id);
    }

    inline __attribute__ ((always_inline)) void
    disable_interrupt (source_t global_interrupt_id)
    {
      riscv_plic_disable_interrupt (global_interrupt_id);
    }

    inline __attribute__ ((always_inline)) bool
    is_interrupt_enabled (source_t global_interrupt_id)
    {
      return riscv_plic_is_interrupt_enabled (global_interrupt_id);
    }

    inline __attribute__ ((always_inline)) void
    priority (source_t global_interrupt_id, priority_t priority)
    {
      riscv_plic_write_priority (global_interrupt_id, priority);
    }

    inline __attribute__ ((always_inline)) priority_t
    priority (source_t global_interrupt_id)
    {
      return riscv_plic_read_priority (global_interrupt_id);
    }

    /**
     * @details
     * The E31 Core Complex can perform an interrupt claim by reading
     * the claim/complete register (Table 7.9), which returns the
     * ID of the highest priority pending interrupt or zero if there
     * is no pending interrupt. A successful claim will also
     * atomically clear the corresponding pending bit on the
     * interrupt source.
     *
     * The E31 Core Complex can perform a claim at any time, even if
     * the MEIP bit in the mip (Section 6.2.2) register is not set.
     *
     * The claim operation is not affected by the setting of the
     * priority threshold register.
     */
    inline __attribute__ ((always_inline)) source_t
    claim_interrupt (void)
    {
      return riscv_plic_claim_interrupt ();
    }

    /**
     * @details
     * The E31 Core Complex signals it has completed executing an
     * interrupt handler by writing the interrupt ID it received
     * from the claim to the claim/complete register (Table 7.9).
     * The PLIC does not check whether the completion ID is the
     * same as the last claim ID for that target. If the completion
     * ID does not match an interrupt source that is currently
     * enabled for the target, the completion is silently ignored.
     */
    inline __attribute__ ((always_inline)) void
    complete_interrupt (source_t global_interrupt_id)
    {
      riscv_plic_complete_interrupt (global_interrupt_id);
    }

    // ------------------------------------------------------------------------
  } // namespace plic
} // namespace riscv

#endif // defined(__cplusplus)

// ----------------------------------------------------------------------------

#endif // SIFIVE_DEVICES_PLIC_FUNCTIONS_INLINES_H_

// ----------------------------------------------------------------------------
