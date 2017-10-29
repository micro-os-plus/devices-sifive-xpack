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

#ifndef SIFIVE_DEVICES_FE310_DEFINES_H_
#define SIFIVE_DEVICES_FE310_DEFINES_H_

#include <stdint.h>

// ----------------------------------------------------------------------------

#define SIFIVE_FE310_GPIO_PINS_LAST_NUMBER (31u)

// ----------------------------------------------------------------------------

// The names of the RISCV_MMIO_ symbols are architecture specific,
// but their values depend on a specific device implementation.
// These definitions will be used in <riscv-arch/device-functions-inlines.h>,
// included in <micro-os-plus/device..

#define RISCV_MMIO_MTIME_ADDRESS (SIFIVE_FE310_CLINT_BASE_ADDRESS + SIFIVE_FE310_CLINT_MTIME_OFFSET)
#define RISCV_MMIO_MTIMECMP_ADDRESS (SIFIVE_FE310_CLINT_BASE_ADDRESS + SIFIVE_FE310_CLINT_MTIMECMP_OFFSET)

// ----------------------------------------------------------------------------
// Alternate IO Functions. To activate them, set the GPIO->iofen bits.

// IOF0. Clear the corresponding bits in GPIO->iofsel.
#define SIFIVE_FE310_GPIO_IOF0_SPI1_MASK            (0x000007FCul)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_SS0_POSITION    (2u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_SS0             (1u << 2u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_SS1_POSITION    (8u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_SS1             (1u << 8u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_SS2_POSITION    (9u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_SS2             (1u << 9u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_SS3_POSITION    (10u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_SS3             (1u << 10u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_MOSI_POSITION   (3u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_MOSI            (1u << 3u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_MISO_POSITION   (4u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_MISO            (1u << 4u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_SCK_POSITION    (5u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_SCK             (1u << 5u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_DQ0_POSITION    (3u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_DQ0             (1u << 3u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_DQ1_POSITION    (4u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_DQ1             (1u << 4u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_DQ2_POSITION    (6u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_DQ2             (1u << 6u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_DQ3_POSITION    (7u)
#define SIFIVE_FE310_GPIO_IOF0_SPI1_DQ3             (1u << 7u)

#define SIFIVE_FE310_GPIO_IOF0_SPI2_MASK            (0xFC000000ul)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_SS0_POSITION    (26u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_SS0             (1u << 26u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_MOSI_POSITION   (27u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_MOSI            (1u << 27u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_MISO_POSITION   (28u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_MISO            (1u << 28u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_SCK_POSITION    (29u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_SCK             (1u << 29u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_DQ0_POSITION    (27u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_DQ0             (1u << 27u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_DQ1_POSITION    (28u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_DQ1             (1u << 28u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_DQ2_POSITION    (30u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_DQ2             (1u << 30u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_DQ3_POSITION    (31u)
#define SIFIVE_FE310_GPIO_IOF0_SPI2_DQ3             (1u << 31u)

#define SIFIVE_FE310_GPIO_IOF0_UART0_MASK           (0x00030000ul)
#define SIFIVE_FE310_GPIO_IOF0_UART0_RX_POSITION    (16u)
#define SIFIVE_FE310_GPIO_IOF0_UART0_RX             (1u << 16u)
#define SIFIVE_FE310_GPIO_IOF0_UART0_TX_POSITION    (17u)
#define SIFIVE_FE310_GPIO_IOF0_UART0_TX             (1u << 17u)

#define SIFIVE_FE310_GPIO_IOF0_UART1_MASK           (0x03000000ul)
#define SIFIVE_FE310_GPIO_IOF0_UART1_RX_POSITION    (24u)
#define SIFIVE_FE310_GPIO_IOF0_UART1_RX             (1u << 24u)
#define SIFIVE_FE310_GPIO_IOF0_UART1_TX_POSITION    (25u)
#define SIFIVE_FE310_GPIO_IOF0_UART1_TX             (1u << 25u)

// IOF1. Set the corresponding bits in GPIO->iofsel.
#define SIFIVE_FE310_GPIO_IOF1_PWM0_MASK            (0x0000000Ful)
#define SIFIVE_FE310_GPIO_IOF1_PWM1_MASK            (0x00780000ul)
#define SIFIVE_FE310_GPIO_IOF1_PWM2_MASK            (0x00003C00ul)

// ----------------------------------------------------------------------------

#endif /* SIFIVE_DEVICES_FE310_DEFINES_H_ */
