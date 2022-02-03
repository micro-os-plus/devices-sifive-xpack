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

#if defined(__riscv)

// ----------------------------------------------------------------------------

#include <micro-os-plus/device.h>

#include <cstdint>
#include <cstddef>

// ----------------------------------------------------------------------------

namespace riscv
{
  namespace plic
  {
    // ------------------------------------------------------------------------
    // Device PLIC functions definitions.

    void
    initialize (void)
    {
      // Disable all interrupts for the current hart.
      for (std::size_t i = 0;
           i < ((RISCV_INTERRUPTS_GLOBAL_LAST_NUMBER + 32u) / 32u); ++i)
        {
          PLIC->enablestarget0.m.enables[i] = 0;
        }

      // Set the threshold to zero.
      PLIC->target0.m.threshold = 0;
    }

    void
    clear_priorities (void)
    {
      // Set priorities to zero. The array starts at 1.
      for (std::size_t i = 1; i <= RISCV_INTERRUPTS_GLOBAL_LAST_NUMBER; ++i)
        {
          PLIC->priorities[i - 1] = 0;
        }
    }

    // ------------------------------------------------------------------------
  } // namespace plic
} // namespace riscv

// ----------------------------------------------------------------------------
// C aliases to the C++ functions.

void __attribute__ ((alias ("_ZN5riscv4plic10initializeEv")))
riscv_plic_initialize (void);

void __attribute__ ((alias ("_ZN5riscv4plic16clear_prioritiesEv")))
riscv_plic_clear_priorities (void);

// ----------------------------------------------------------------------------

#endif // defined(__riscv)

// ----------------------------------------------------------------------------
