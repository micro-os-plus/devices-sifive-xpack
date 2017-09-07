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

#include <cstddef>

// ----------------------------------------------------------------------------
// Validate the typedef content towards the Coreplex IP memory maps.

static_assert(offsetof(riscv_device_prci_t, coreclkcfg) == (0x0010),
    "Wrong offset of prci coreclkcfg");

static_assert(offsetof(riscv_device_gpio_t, out_xor) == (GPIO_OUTPUT_XOR),
    "Wrong offset of gpio out_xor");

static_assert(offsetof(riscv_device_uart_t, div) == (UART_REG_DIV),
    "Wrong offset of uart div");

static_assert(offsetof(riscv_device_pwm_t, pwmcmp3) == (PWM_CMP3),
    "Wrong offset of pwm pwmcmp3");

// ----------------------------------------------------------------------------

namespace riscv
{
  namespace device
  {
  // ------------------------------------------------------------------------
  // Device functions definitions.

  // TODO: add functions.

  // --------------------------------------------------------------------------
  } /* namespace device */
} /* namespace riscv */

// ----------------------------------------------------------------------------
// C aliases to the C++ functions.

// TODO: add aliases.

// uint64_t
// __attribute__((alias("_ZN5riscv6device5mtimeEv")))
// riscv_device_read_mtime (void);

// ----------------------------------------------------------------------------