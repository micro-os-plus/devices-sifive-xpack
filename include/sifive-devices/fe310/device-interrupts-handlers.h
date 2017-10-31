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

#ifndef SIFIVE_DEVICES_FE310_DEVICE_INTERRUPTS_HANDLERS_H_
#define SIFIVE_DEVICES_FE310_DEVICE_INTERRUPTS_HANDLERS_H_

/*
 * SiFive Freedom E310 global interrupts handler functions.
 */

// ----------------------------------------------------------------------------
#if defined(__cplusplus)
extern "C"
{
#endif /* defined(__cplusplus) */

  // --------------------------------------------------------------------------
  // Global interrupt handlers.
  // Read the names as `sifive::fe310::interrupt::global::handle_wdogcmp()`.

  void
  sifive_interrupt_global_handle_wdogcmp (void);

  void
  sifive_interrupt_global_handle_rtccmp (void);

  void
  sifive_interrupt_global_handle_uart0 (void);

  void
  sifive_interrupt_global_handle_uart1 (void);

  void
  sifive_interrupt_global_handle_qspi0 (void);

  void
  sifive_interrupt_global_handle_qspi1 (void);

  void
  sifive_interrupt_global_handle_qspi2 (void);

  void
  sifive_interrupt_global_handle_gpio0 (void);

  void
  sifive_interrupt_global_handle_gpio1 (void);

  void
  sifive_interrupt_global_handle_gpio2 (void);

  void
  sifive_interrupt_global_handle_gpio3 (void);

  void
  sifive_interrupt_global_handle_gpio4 (void);

  void
  sifive_interrupt_global_handle_gpio5 (void);

  void
  sifive_interrupt_global_handle_gpio6 (void);

  void
  sifive_interrupt_global_handle_gpio7 (void);

  void
  sifive_interrupt_global_handle_gpio8 (void);

  void
  sifive_interrupt_global_handle_gpio9 (void);

  void
  sifive_interrupt_global_handle_gpio10 (void);

  void
  sifive_interrupt_global_handle_gpio11 (void);

  void
  sifive_interrupt_global_handle_gpio12 (void);

  void
  sifive_interrupt_global_handle_gpio13 (void);

  void
  sifive_interrupt_global_handle_gpio14 (void);

  void
  sifive_interrupt_global_handle_gpio15 (void);

  void
  sifive_interrupt_global_handle_gpio16 (void);

  void
  sifive_interrupt_global_handle_gpio17 (void);

  void
  sifive_interrupt_global_handle_gpio18 (void);

  void
  sifive_interrupt_global_handle_gpio19 (void);

  void
  sifive_interrupt_global_handle_gpio20 (void);

  void
  sifive_interrupt_global_handle_gpio21 (void);

  void
  sifive_interrupt_global_handle_gpio22 (void);

  void
  sifive_interrupt_global_handle_gpio23 (void);

  void
  sifive_interrupt_global_handle_gpio24 (void);

  void
  sifive_interrupt_global_handle_gpio25 (void);

  void
  sifive_interrupt_global_handle_gpio26 (void);

  void
  sifive_interrupt_global_handle_gpio27 (void);

  void
  sifive_interrupt_global_handle_gpio28 (void);

  void
  sifive_interrupt_global_handle_gpio29 (void);

  void
  sifive_interrupt_global_handle_gpio30 (void);

  void
  sifive_interrupt_global_handle_gpio31 (void);

  void
  sifive_interrupt_global_handle_pwm0cmp0 (void);

  void
  sifive_interrupt_global_handle_pwm0cmp1 (void);

  void
  sifive_interrupt_global_handle_pwm0cmp2 (void);

  void
  sifive_interrupt_global_handle_pwm0cmp3 (void);

  void
  sifive_interrupt_global_handle_pwm1cmp0 (void);

  void
  sifive_interrupt_global_handle_pwm1cmp1 (void);

  void
  sifive_interrupt_global_handle_pwm1cmp2 (void);

  void
  sifive_interrupt_global_handle_pwm1cmp3 (void);

  void
  sifive_interrupt_global_handle_pwm2cmp0 (void);

  void
  sifive_interrupt_global_handle_pwm2cmp1 (void);

  void
  sifive_interrupt_global_handle_pwm2cmp2 (void);

  void
  sifive_interrupt_global_handle_pwm2cmp3 (void);

  // --------------------------------------------------------------------------
  // Local interrupt handlers.

  // Architecture common handlers.
  void
  riscv_interrupt_local_handle_machine_software (void);

  void
  riscv_interrupt_local_handle_machine_timer (void);

  void
  riscv_interrupt_local_handle_machine_ext (void);

// ----------------------------------------------------------------------------

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

// ----------------------------------------------------------------------------

#endif /* SIFIVE_DEVICES_FE310_DEVICE_INTERRUPTS_HANDLERS_H_ */
