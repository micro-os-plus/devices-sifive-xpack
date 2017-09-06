/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2017 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include <micro-os-plus/device.h>

#include <cstdint>
#include <cstddef>

// ----------------------------------------------------------------------------
// Validate the riscv_plic_t content towards the Coreplex IP PLIC memory map.

static_assert(sizeof(riscv_plic_t) == (0x0FFFFFFF + 1 - 0x0C000000),
    "Wrong size of riscv_plic_t");

static_assert(offsetof(riscv_plic_t, pending_bits) == (0x0C001000 - 0x0C000000),
    "Wrong offset of pending_bits");

static_assert(offsetof(riscv_plic_t, target_enables) == (0x0C002000 - 0x0C000000),
    "Wrong offset of target_enables");

static_assert(offsetof(riscv_plic_t, targets) == (0x0C200000 - 0x0C000000),
    "Wrong offset of targets");

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
      riscv::arch::register_t hart_id = riscv::csr::mhartid ();

      // Disable all interrupts for the current hart.
      for (std::size_t i = 0;
          i < ((RISCV_INTERRUPTS_GLOBAL_ARRAY_SIZE + 32u) / 32u); ++i)
        {
          plic_ptr->target_enables[hart_id].bits[i] = 0;
        }

      // Set the threshold to zero.
      plic_ptr->targets[hart_id].priority_threshold = 0;
    }

    void
    clear_priorities (void)
    {
      // Set priorities to zero.
      for (std::size_t i = 0; i < RISCV_INTERRUPTS_GLOBAL_ARRAY_SIZE; ++i)
        {
          plic_ptr->source_priorities[i] = 0;
        }
    }

  // --------------------------------------------------------------------------
  } /* namespace plic */
} /* namespace riscv */

// ----------------------------------------------------------------------------
// C aliases to the C++ functions.

void
__attribute__((alias("_ZN5riscv4plic10initializeEv")))
riscv_plic_initialize (void);

void
__attribute__((alias("_ZN5riscv4plic16clear_prioritiesEv")))
riscv_plic_clear_priorities (void);

// ----------------------------------------------------------------------------
