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

#include <micro-os-plus/board.h>

#include <stddef.h>
#include <stdbool.h>

// ----------------------------------------------------------------------------

#if defined (SIFIVE_FE310)

extern "C"
{
  void
  sifive_interrupt_handle_unused (void);
}

// ----------------------------------------------------------------------------

// To provide the desired functionality, redefine any of these
// functions in the application.
// Read the names as `sifive::interrupt::global::handle_wdogcmp()`.

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_wdogcmp (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_rtccmp (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_uart0 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_uart1 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_qspi0 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_qspi1 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_qspi2 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio0 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio1 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio2 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio3 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio4 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio5 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio6 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio7 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio8 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio9 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio10 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio11 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio12 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio13 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio14 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio15 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio16 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio17 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio18 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio19 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio20 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio21 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio22 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio23 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio24 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio25 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio26 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio27 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio28 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio29 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio30 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_gpio31 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_pwm0cmp0 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_pwm0cmp1 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_pwm0cmp2 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_pwm0cmp3 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_pwm1cmp0 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_pwm1cmp1 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_pwm1cmp2 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_pwm1cmp3 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_pwm2cmp0 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_pwm2cmp1 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_pwm2cmp2 (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
sifive_interrupt_global_handle_pwm2cmp3 (void);

/*
 * Array of pointers to interrupt handlers. See Table 3.6 from Volume II.
 */
riscv_trap_handler_ptr_t __attribute__ ((section(".interrupts_global_array")))
riscv_interrupts_global_handlers[] =
  { //
    sifive_interrupt_handle_unused, /* 0 */
    sifive_interrupt_global_handle_wdogcmp, /* 1 */
    sifive_interrupt_global_handle_rtccmp, /* 2 */
    sifive_interrupt_global_handle_uart0, /* 3 */
    sifive_interrupt_global_handle_uart1, /* 4 */
    sifive_interrupt_global_handle_qspi0, /* 5 */
    sifive_interrupt_global_handle_qspi1, /* 6 */
    sifive_interrupt_global_handle_qspi2, /* 7 */
    sifive_interrupt_global_handle_gpio0, /* 8 */
    sifive_interrupt_global_handle_gpio1, /* 9 */
    sifive_interrupt_global_handle_gpio2, /* 10 */
    sifive_interrupt_global_handle_gpio3, /* 11 */
    sifive_interrupt_global_handle_gpio4, /* 12 */
    sifive_interrupt_global_handle_gpio5, /* 13 */
    sifive_interrupt_global_handle_gpio6, /* 14 */
    sifive_interrupt_global_handle_gpio7, /* 15 */
    sifive_interrupt_global_handle_gpio8, /* 16 */
    sifive_interrupt_global_handle_gpio9, /* 17 */
    sifive_interrupt_global_handle_gpio10, /* 18 */
    sifive_interrupt_global_handle_gpio11, /* 19 */
    sifive_interrupt_global_handle_gpio12, /* 20 */
    sifive_interrupt_global_handle_gpio13, /* 21 */
    sifive_interrupt_global_handle_gpio14, /* 22 */
    sifive_interrupt_global_handle_gpio15, /* 23 */
    sifive_interrupt_global_handle_gpio16, /* 24 */
    sifive_interrupt_global_handle_gpio17, /* 25 */
    sifive_interrupt_global_handle_gpio18, /* 26 */
    sifive_interrupt_global_handle_gpio19, /* 27 */
    sifive_interrupt_global_handle_gpio20, /* 28 */
    sifive_interrupt_global_handle_gpio21, /* 29 */
    sifive_interrupt_global_handle_gpio22, /* 30 */
    sifive_interrupt_global_handle_gpio23, /* 31 */
    sifive_interrupt_global_handle_gpio24, /* 32 */
    sifive_interrupt_global_handle_gpio25, /* 33 */
    sifive_interrupt_global_handle_gpio26, /* 34 */
    sifive_interrupt_global_handle_gpio27, /* 35 */
    sifive_interrupt_global_handle_gpio28, /* 36 */
    sifive_interrupt_global_handle_gpio29, /* 37 */
    sifive_interrupt_global_handle_gpio30, /* 38 */
    sifive_interrupt_global_handle_gpio31, /* 39 */
    sifive_interrupt_global_handle_pwm0cmp0, /* 40 */
    sifive_interrupt_global_handle_pwm0cmp1, /* 41 */
    sifive_interrupt_global_handle_pwm0cmp2, /* 42 */
    sifive_interrupt_global_handle_pwm0cmp3, /* 43 */
    sifive_interrupt_global_handle_pwm1cmp0, /* 44 */
    sifive_interrupt_global_handle_pwm1cmp1, /* 45 */
    sifive_interrupt_global_handle_pwm1cmp2, /* 46 */
    sifive_interrupt_global_handle_pwm1cmp3, /* 47 */
    sifive_interrupt_global_handle_pwm2cmp0, /* 48 */
    sifive_interrupt_global_handle_pwm2cmp1, /* 49 */
    sifive_interrupt_global_handle_pwm2cmp2, /* 50 */
    sifive_interrupt_global_handle_pwm2cmp3 /* 51 */
  };

static_assert(
    sizeof(riscv_interrupts_global_handlers)/sizeof(riscv_interrupts_global_handlers[0]) == (RISCV_INTERRUPTS_GLOBAL_LAST_NUMBER + 1),
    "riscv_interrupts_global_handlers[] size must match RISCV_INTERRUPTS_GLOBAL_LAST_NUMBER");

// ----------------------------------------------------------------------------

// Architecture interrupts.
void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
riscv_interrupt_local_handle_machine_software (void);

void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
riscv_interrupt_local_handle_machine_timer (void);

#if defined (RISCV_INTERRUPTS_GLOBAL_LAST_NUMBER)

extern void
riscv_interrupt_local_handle_machine_ext (void);

#else

// Defined in the architecture package.
void
__attribute__ ((weak, alias ("sifive_interrupt_handle_unused")))
riscv_interrupt_local_handle_machine_ext (void);

#endif /* defined (RISCV_INTERRUPTS_GLOBAL_LAST_NUMBER) */

// Device local interrupts.
// (none)

/*
 * Array of pointers to interrupt handlers. See Table 3.6 from Volume II.
 */
riscv_trap_handler_ptr_t __attribute__ ((section(".interrupts_local_array")))
riscv_interrupts_local_handlers[] =
  { // Architecture interrupts.
    sifive_interrupt_handle_unused, /* 0 */
    sifive_interrupt_handle_unused, /* 1 */
    sifive_interrupt_handle_unused, /* 2 */
    riscv_interrupt_local_handle_machine_software, /* 3 */
    sifive_interrupt_handle_unused, /* 4 */
    sifive_interrupt_handle_unused, /* 5 */
    sifive_interrupt_handle_unused, /* 6 */
    riscv_interrupt_local_handle_machine_timer, /* 7 */
    sifive_interrupt_handle_unused, /* 8 */
    sifive_interrupt_handle_unused, /* 9 */
    sifive_interrupt_handle_unused, /* 10 */
    riscv_interrupt_local_handle_machine_ext, /* 11 */
    sifive_interrupt_handle_unused, /* 12 */
    sifive_interrupt_handle_unused, /* 13 */
    sifive_interrupt_handle_unused, /* 14 */
    sifive_interrupt_handle_unused, /* 15 */
    // Device local interrupts.
    // (none)
  };

static_assert(
    sizeof(riscv_interrupts_local_handlers)/sizeof(riscv_interrupts_local_handlers[0]) == (RISCV_INTERRUPTS_LOCAL_LAST_NUMBER + 1),
    "riscv_interrupts_local_handlers[] size must match RISCV_INTERRUPTS_LOCAL_LAST_NUMBER");

// ----------------------------------------------------------------------------

void
__attribute__ ((section(".traps_handlers"),weak))
sifive_interrupt_handle_unused (void)
{
#if defined(DEBUG)
  riscv::arch::ebreak ();
#endif /* defined(DEBUG) */

  while (true)
    {
      riscv::arch::nop ();
    }
}

#endif /* DEVICE */

// ----------------------------------------------------------------------------
