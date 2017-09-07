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

#ifndef SIFIVE_COREPLEX_DEVICES_TYPES_H_
#define SIFIVE_COREPLEX_DEVICES_TYPES_H_

#include <stdint.h>

// ----------------------------------------------------------------------------

typedef uint32_t riscv_plic_source_t;
typedef uint32_t riscv_plic_priority_t;

// The Coreplex IP PLIC supports a maximum of 255 external interrupt
// sources with 7 priority levels.

#define RISCV_INTERRUPTS_GLOBAL_MAX_ARRAY_SIZE  (256)

typedef struct riscv_plic_target_enables_s
{
  volatile uint32_t bits[RISCV_INTERRUPTS_GLOBAL_MAX_ARRAY_SIZE / 32];
} riscv_plic_target_enables_t;

typedef struct riscv_plic_target_s
{
  /**
   * The threshold is a WARL field, where the E31 Coreplex supports
   * a maximum threshold of 7.
   * The E31 Coreplex will mask all PLIC interrupts of a priority
   * less than or equal to threshold. For example, a threshold
   * value of zero permits all interrupts with non-zero priority,
   * whereas a value of 7 masks all interrupts.
   */
  volatile uint32_t priority_threshold;

  /**
   * A read of zero indicates that no interrupts are pending.
   * A non-zero read contains the id of the highest pending
   * interrupt.
   *
   * A write to this register signals completion of the interrupt
   * id written.
   */
  volatile uint32_t claim_complete;

  // TODO: check if any reserved words should be here.
} riscv_plic_target_t;

typedef struct riscv_plic_s
{
  volatile uint32_t source_priorities[RISCV_INTERRUPTS_GLOBAL_MAX_ARRAY_SIZE];
  uint32_t reserved0[1024u - RISCV_INTERRUPTS_GLOBAL_MAX_ARRAY_SIZE];

  volatile uint32_t pending_bits[RISCV_INTERRUPTS_GLOBAL_MAX_ARRAY_SIZE / 32u];
  uint32_t reserved1[1024u - (RISCV_INTERRUPTS_GLOBAL_MAX_ARRAY_SIZE / 32u)];

  riscv_plic_target_enables_t target_enables[1];
  uint32_t reserved2[(2088960u - sizeof(riscv_plic_target_enables_t) * 1)
      / sizeof(uint32_t)];

  riscv_plic_target_t targets[1];
  uint32_t reserved3[(65011712u - sizeof(riscv_plic_target_t) * 1)
      / sizeof(uint32_t)];
} riscv_plic_t;

// ----------------------------------------------------------------------------

typedef struct riscv_device_prci_s
{
  volatile uint32_t hfrosccfg;
  volatile uint32_t hfxosccfg;
  volatile uint32_t pllcfg;
  volatile uint32_t plloutdiv;
  volatile uint32_t coreclkcfg;
} riscv_device_prci_t;

// ----------------------------------------------------------------------------

typedef struct riscv_device_gpio_s
{
  volatile uint32_t value;
  volatile uint32_t input_en;
  volatile uint32_t output_en;
  volatile uint32_t port;
  volatile uint32_t pue;
  volatile uint32_t ds;
  volatile uint32_t rise_ie;
  volatile uint32_t rise_ip;
  volatile uint32_t fall_ie;
  volatile uint32_t fall_ip;
  volatile uint32_t high_ie;
  volatile uint32_t high_ip;
  volatile uint32_t low_ie;
  volatile uint32_t low_ip;
  volatile uint32_t iof_en;
  volatile uint32_t iof_sel;
  volatile uint32_t out_xor;
} riscv_device_gpio_t;

// ----------------------------------------------------------------------------

typedef struct riscv_device_uart_s
{
  volatile uint32_t txdata;
  volatile uint32_t rxdata;
  volatile uint32_t txctrl;
  volatile uint32_t rxctrl;
  volatile uint32_t ie;
  volatile uint32_t ip;
  volatile uint32_t div;
} riscv_device_uart_t;

// ----------------------------------------------------------------------------

typedef struct riscv_device_pwm_s
{
  volatile uint32_t pwmcfg;
  volatile uint32_t __reserved0;
  volatile uint32_t pwmcount;
  volatile uint32_t __reserved1;
  volatile uint32_t pwms;
  volatile uint32_t __reserved2[3];
  volatile uint32_t pwmcmp0;
  volatile uint32_t pwmcmp1;
  volatile uint32_t pwmcmp2;
  volatile uint32_t pwmcmp3;
} riscv_device_pwm_t;

// ----------------------------------------------------------------------------

#if defined(__cplusplus)

namespace riscv
{
  // Not yet used.

  using plic_t = riscv_plic_t;

  namespace device
  {
    using prci_t = riscv_device_prci_t;

    using gpio_t = riscv_device_gpio_t;
    using uart_t = riscv_device_uart_t;
    using pwm_t = riscv_device_pwm_t;

  // --------------------------------------------------------------------------
  } /* namespace device */
// ----------------------------------------------------------------------------
} /* namespace riscv */

#endif /* __cplusplus */

// ----------------------------------------------------------------------------

#endif /* SIFIVE_COREPLEX_DEVICES_TYPES_H_ */
