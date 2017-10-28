/*
 * This file is part of the µOS++ distribution
 *   (http://micro-os-plus.github.io).
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

#ifndef SIFIVE_DEVICES_ARTY_E51_DEVICE_PERIPHERALS_H_
#define SIFIVE_DEVICES_ARTY_E51_DEVICE_PERIPHERALS_H_

// ----------------------------------------------------------------------------

/**
 * @brief µOS++ Core - device peripherals header file
 *  for Core Complex E51 Arty from SiFive, Inc.
 * @version 0.1.0
 * @date 2017-10-28
 * @note Generated from e51arty-xsvd.json@0.1.0 with xsvd@0.2.3.
 */

// ----------------------------------------------------------------------------

#include <stdint.h>

#if defined(__cplusplus)
extern "C"
{
#endif

/** 
 * @addtogroup sifive
 * @{
 */

/**
 * @addtogroup e31arty
 * @{
 */

/** 
 * @addtogroup device-interrupts
 * @{
 */

// ----------------------------------------------------------------------------

/**
 * @brief Interrupt Numbers.
 */

typedef enum {
  sifive_e51arty_interrupt_global_uart0 = 1, /**< UART0 Interrupt */
  sifive_e51arty_interrupt_global_switch0 = 2, /**< SWITCH 0 Interrupt */
  sifive_e51arty_interrupt_global_switch1 = 3, /**< SWITCH 1 Interrupt */
  sifive_e51arty_interrupt_global_switch2 = 4, /**< SWITCH 2 Interrupt */
  sifive_e51arty_interrupt_global_switch3 = 5, /**< SWITCH 3 Interrupt */
  sifive_e51arty_interrupt_global_qspi0 = 6, /**< QSPI0 Interrupt */
  sifive_e51arty_interrupt_global_gpio0 = 7, /**< GPIO0 Interrupt */
  sifive_e51arty_interrupt_global_gpio1 = 8, /**< GPIO1 Interrupt */
  sifive_e51arty_interrupt_global_gpio2 = 9, /**< GPIO2 Interrupt */
  sifive_e51arty_interrupt_global_gpio3 = 10, /**< GPIO3 Interrupt */
  sifive_e51arty_interrupt_global_gpio4 = 11, /**< GPIO4 Interrupt */
  sifive_e51arty_interrupt_global_gpio5 = 12, /**< GPIO5 Interrupt */
  sifive_e51arty_interrupt_global_gpio6 = 13, /**< GPIO6 Interrupt */
  sifive_e51arty_interrupt_global_gpio7 = 14, /**< GPIO7 Interrupt */
  sifive_e51arty_interrupt_global_gpio8 = 15, /**< GPIO8 Interrupt */
  sifive_e51arty_interrupt_global_gpio9 = 16, /**< GPIO9 Interrupt */
  sifive_e51arty_interrupt_global_gpio10 = 17, /**< GPIO10 Interrupt */
  sifive_e51arty_interrupt_global_gpio11 = 18, /**< GPIO11 Interrupt */
  sifive_e51arty_interrupt_global_gpio12 = 19, /**< GPIO12 Interrupt */
  sifive_e51arty_interrupt_global_gpio13 = 20, /**< GPIO13 Interrupt */
  sifive_e51arty_interrupt_global_gpio14 = 21, /**< GPIO14 Interrupt */
  sifive_e51arty_interrupt_global_gpio15 = 22, /**< GPIO15 Interrupt */
  sifive_e51arty_interrupt_global_pwm0cmp0 = 23, /**< PWM0 Compare 0 Interrupt */
  sifive_e51arty_interrupt_global_pwm0cmp1 = 24, /**< PWM0 Compare 1 Interrupt */
  sifive_e51arty_interrupt_global_pwm0cmp2 = 25, /**< PWM0 Compare 2 Interrupt */
  sifive_e51arty_interrupt_global_pwm0cmp3 = 26, /**< PWM0 Compare 3 Interrupt */
} riscv_interrupts_global_enum_t;

#define RISCV_INTERRUPTS_GLOBAL_PRIORITY_BITS  (3u)
#define RISCV_INTERRUPTS_GLOBAL_PRIORITY_LEVELS  (7u)
#define RISCV_INTERRUPTS_GLOBAL_NUMBEROF  (26u)

// ----------------------------------------------------------------------------

/**
 * @}
 */ /* End of group device-interrupts */

/** 
 * @addtogroup device-peripheral-registers
 * @{
 */

#define IO__ volatile
#define I__ volatile
#define O__ volatile

// ----------------------------------------------------------------------------

/**
 * @brief Core Complex Local Interruptor (CLINT) Peripheral.
 */

typedef struct {
  IO__ uint32_t msip[1];  /**< @0x0000000002000000: MSIP (Machine-mode Software Interrupts) Register per Hart */
       uint32_t reserved1[4095];
  IO__ uint64_t mtimecmp[1];  /**< @0x0000000002004000: Machine Time Compare Registers per Hart */
       uint64_t reserved2[4094];
  I__  uint64_t mtime;  /**< @0x000000000200BFF8: Machine Time Register */
       uint32_t reserved3[4096];
} sifive_e51arty_clint_t; // 0x000000000200FFFF

// ----------------------------------------------------------------------------

/**
 * @brief Hart 0 M-mode Interrupt Enable Bits.
 */

typedef struct {
  IO__ uint32_t enables[16];  /**< @0x000000000C002000: Interrupt Enable Bits Registers */
} sifive_e51arty_plic_enablestarget0_m_t; // 0x000000000C00203F

// ----------------------------------------------------------------------------

/**
 * @brief Hart 0 Interrupt Enable Bits.
 */

typedef struct {
       sifive_e51arty_plic_enablestarget0_m_t m;  /**< @0x000000000C002000: Hart 0 M-mode Interrupt Enable Bits */
} sifive_e51arty_plic_enablestarget0_t; // 0x000000000C00203F

// ----------------------------------------------------------------------------

/**
 * @brief Hart 0 M-Mode Interrupt Threshold.
 */

typedef struct {

       union {
         IO__ uint32_t threshold;  /**< @0x000000000C200000: The Priority Threshold Register */

         struct {
           IO__ uint32_t value : 3;  /**< [2..0] The priority threshold value */
                uint32_t : 29;
         } threshold_bits;
       };
  IO__ uint32_t claimcomplete;  /**< @0x000000000C200004: The Interrupt Claim/Completion Register */
} sifive_e51arty_plic_target0_m_t; // 0x000000000C200007

// ----------------------------------------------------------------------------

/**
 * @brief Hart 0 Interrupt Thresholds.
 */

typedef struct {
       sifive_e51arty_plic_target0_m_t m;  /**< @0x000000000C200000: Hart 0 M-Mode Interrupt Threshold */
} sifive_e51arty_plic_target0_t; // 0x000000000C200007

// ----------------------------------------------------------------------------

/**
 * @brief Platform-Level Interrupt Controller (PLIC) Peripheral.
 */

typedef struct {
       uint32_t reserved1;

       union {
         IO__ uint32_t priorities[511];  /**< @0x000000000C000004: Interrupt Priorities Registers */

         struct {
           IO__ uint32_t value : 3;  /**< [2..0] The priority for a given global interrupt */
                uint32_t : 29;
         } priorities_bits[511];
       };
       uint32_t reserved2[512];
  I__  uint32_t pendings[16];  /**< @0x000000000C001000: Interrupt Pending Bits Registers */
       uint32_t reserved3[1008];
       sifive_e51arty_plic_enablestarget0_t enablestarget0;  /**< @0x000000000C002000: Hart 0 Interrupt Enable Bits */
       uint32_t reserved4[522224];
       sifive_e51arty_plic_target0_t target0;  /**< @0x000000000C200000: Hart 0 Interrupt Thresholds */
       uint32_t reserved5[16252926];
} sifive_e51arty_plic_t; // 0x000000000FFFFFFF

// ----------------------------------------------------------------------------

/**
 * @brief Universal Asynchronous Receiver/Transmitter (UART) Peripheral.
 */

typedef struct {

       union {
         IO__ uint32_t txdata;  /**< @0x0000000020000000: Transmit Data Register */

         struct {
           IO__ uint32_t data : 8;  /**< [7..0] Transmit data */
                uint32_t : 23;
           IO__ uint32_t full : 1;  /**< [31..31] Transmit FIFO full */
         } txdata_bits;
       };

       union {
         IO__ uint32_t rxdata;  /**< @0x0000000020000004: Receive Data Register */

         struct {
           I__  uint32_t data : 8;  /**< [7..0] Received data */
                uint32_t : 23;
           IO__ uint32_t empty : 1;  /**< [31..31] Receive FIFO empty */
         } rxdata_bits;
       };

       union {
         IO__ uint32_t txctrl;  /**< @0x0000000020000008: Transmit Control Register  */

         struct {
           IO__ uint32_t txen : 1;  /**< [0..0] Transmit enable */
           IO__ uint32_t nstop : 1;  /**< [1..1] Number of stop bits */
                uint32_t : 14;
           IO__ uint32_t txcnt : 3;  /**< [18..16] Transmit watermark level */
                uint32_t : 13;
         } txctrl_bits;
       };

       union {
         IO__ uint32_t rxctrl;  /**< @0x000000002000000C: Receive Control Register */

         struct {
           IO__ uint32_t rxen : 1;  /**< [0..0] Receive enable */
                uint32_t : 15;
           IO__ uint32_t rxcnt : 3;  /**< [18..16] Receive watermark level */
                uint32_t : 13;
         } rxctrl_bits;
       };

       union {
         IO__ uint32_t ie;  /**< @0x0000000020000010: Interrupt Enable Register */

         struct {
           IO__ uint32_t txwm : 1;  /**< [0..0] Transmit watermark interrupt enable */
           IO__ uint32_t rxwm : 1;  /**< [1..1] Receive watermark interrupt enable */
                uint32_t : 30;
         } ie_bits;
       };

       union {
         I__  uint32_t ip;  /**< @0x0000000020000014: Interrupt Pending Register */

         struct {
           I__  uint32_t txwm : 1;  /**< [0..0] Transmit watermark interrupt pending */
           I__  uint32_t rxwm : 1;  /**< [1..1] Receive watermark interrupt pending */
                uint32_t : 30;
         } ip_bits;
       };

       union {
         IO__ uint32_t div;  /**< @0x0000000020000018: Baud Rate Divisor Register */

         struct {
           IO__ uint32_t value : 16;  /**< [15..0] Baud rate divisor */
                uint32_t : 16;
         } div_bits;
       };
       uint32_t reserved1[1017];
} sifive_e51arty_uart_t; // 0x0000000020000FFF

// ----------------------------------------------------------------------------

/**
 * @brief General Purpose Input/Output Controller (GPIO) Peripheral.
 */

typedef struct {
  IO__ uint32_t value;  /**< @0x0000000020002000: Pin Value Register */
  IO__ uint32_t inputen;  /**< @0x0000000020002004: Pin Input Enable Register */
  IO__ uint32_t outputen;  /**< @0x0000000020002008: Pin Output Enable Register */
  IO__ uint32_t port;  /**< @0x000000002000200C: Output Port Value Register */
  IO__ uint32_t pue;  /**< @0x0000000020002010: Internal Pull-up Enable Register */
  IO__ uint32_t ds;  /**< @0x0000000020002014: Pin Drive Strength Register */
  IO__ uint32_t riseie;  /**< @0x0000000020002018: Rise Interrupt Enable Register */
  IO__ uint32_t riseip;  /**< @0x000000002000201C: Rise Interrupt Pending Register */
  IO__ uint32_t fallie;  /**< @0x0000000020002020: Fall Interrupt Enable Register */
  IO__ uint32_t fallip;  /**< @0x0000000020002024: Fall Interrupt Pending Register */
  IO__ uint32_t highie;  /**< @0x0000000020002028: High Interrupt Enable Register */
  IO__ uint32_t highip;  /**< @0x000000002000202C: High Interrupt Pending Register */
  IO__ uint32_t lowie;  /**< @0x0000000020002030: Low Interrupt Enable Register */
  IO__ uint32_t lowip;  /**< @0x0000000020002034: Low Interrupt Pending Register */
  IO__ uint32_t iofen;  /**< @0x0000000020002038: HW I/O Function Enable Register */
  IO__ uint32_t iofsel;  /**< @0x000000002000203C: HW I/O Function Select Register */
  IO__ uint32_t outxor;  /**< @0x0000000020002040: Output XOR (invert) Register */
       uint32_t reserved1[1007];
} sifive_e51arty_gpio_t; // 0x0000000020002FFF

// ----------------------------------------------------------------------------

/**
 * @brief Serial Peripheral Interface (SPI) Peripheral.
 */

typedef struct {

       union {
         IO__ uint32_t sckdiv;  /**< @0x0000000020004000: Serial clock divisor Register */

         struct {
           IO__ uint32_t scale : 12;  /**< [11..0] Divisor for serial clock */
                uint32_t : 20;
         } sckdiv_bits;
       };

       union {
         IO__ uint32_t sckmode;  /**< @0x0000000020004004: Serial Clock Mode Register */

         struct {
           IO__ uint32_t pha : 1;  /**< [0..0] Serial clock phase */
           IO__ uint32_t pol : 1;  /**< [1..1] Serial clock polarity */
                uint32_t : 30;
         } sckmode_bits;
       };
       uint32_t reserved1[2];
  IO__ uint32_t csid;  /**< @0x0000000020004010: Chip Select ID Register */
  IO__ uint32_t csdef;  /**< @0x0000000020004014: Chip Select Default Register */

       union {
         IO__ uint32_t csmode;  /**< @0x0000000020004018: Chip Select Mode Register */

         struct {
           IO__ uint32_t mode : 2;  /**< [1..0] Chip select mode */
                uint32_t : 30;
         } csmode_bits;
       };
       uint32_t reserved2[3];

       union {
         IO__ uint32_t delay0;  /**< @0x0000000020004028: Delay Control 0 Register */

         struct {
           IO__ uint32_t cssck : 8;  /**< [7..0] CS to SCK Delay */
                uint32_t : 8;
           IO__ uint32_t sckcs : 8;  /**< [23..16] SCK to CS Delay */
                uint32_t : 8;
         } delay0_bits;
       };

       union {
         IO__ uint32_t delay1;  /**< @0x000000002000402C: Delay Control 1 Register */

         struct {
           IO__ uint32_t intercs : 8;  /**< [7..0] Minimum CS inactive time */
                uint32_t : 8;
           IO__ uint32_t interxfr : 8;  /**< [23..16] Maximum interframe delay */
                uint32_t : 8;
         } delay1_bits;
       };
       uint32_t reserved3[4];

       union {
         IO__ uint32_t fmt;  /**< @0x0000000020004040: Frame Format Register */

         struct {
           IO__ uint32_t proto : 2;  /**< [1..0] SPI Protocol */
           IO__ uint32_t endian : 1;  /**< [2..2] SPI endianness */
           IO__ uint32_t dir : 1;  /**< [3..3] SPI I/O Direction */
                uint32_t : 12;
           IO__ uint32_t len : 4;  /**< [19..16] Number of bits per frame */
                uint32_t : 12;
         } fmt_bits;
       };
       uint32_t reserved4;

       union {
         IO__ uint32_t txdata;  /**< @0x0000000020004048: Tx FIFO Data Register */

         struct {
           IO__ uint32_t data : 8;  /**< [7..0] Transmit data */
                uint32_t : 23;
           I__  uint32_t full : 1;  /**< [31..31] FIFO full flag */
         } txdata_bits;
       };

       union {
         I__  uint32_t rxdata;  /**< @0x000000002000404C: Rx FIFO Data Register */

         struct {
           I__  uint32_t data : 8;  /**< [7..0] Received data */
                uint32_t : 23;
           I__  uint32_t empty : 1;  /**< [31..31] FIFO empty flag */
         } rxdata_bits;
       };

       union {
         IO__ uint32_t txmark;  /**< @0x0000000020004050: Tx FIFO Watermark Register */

         struct {
           IO__ uint32_t value : 3;  /**< [2..0] Transmit watermark */
                uint32_t : 29;
         } txmark_bits;
       };

       union {
         IO__ uint32_t rxmark;  /**< @0x0000000020004054: Rx FIFO Watermark Register */

         struct {
           IO__ uint32_t value : 3;  /**< [2..0] Receive watermark */
                uint32_t : 29;
         } rxmark_bits;
       };
       uint32_t reserved5[2];

       union {
         IO__ uint32_t fctrl;  /**< @0x0000000020004060: Flash Interface Control Register */

         struct {
           IO__ uint32_t en : 1;  /**< [0..0] SPI Flash Mode Select */
                uint32_t : 31;
         } fctrl_bits;
       };

       union {
         IO__ uint32_t ffmt;  /**< @0x0000000020004064: Flash Instruction Format Register */

         struct {
           IO__ uint32_t cmden : 1;  /**< [0..0] Enable sending of command */
           IO__ uint32_t addrlen : 3;  /**< [3..1] Number of address bytes(0 to 4) */
           IO__ uint32_t padcnt : 4;  /**< [7..4] Number of dummy cycles */
           IO__ uint32_t cmdproto : 2;  /**< [9..8] Protocol for transmitting command */
           IO__ uint32_t addrproto : 2;  /**< [11..10] Protocol for transmitting address and padding */
           IO__ uint32_t dataproto : 2;  /**< [13..12] Protocol for receiving data bytes */
                uint32_t : 2;
           IO__ uint32_t cmdcode : 8;  /**< [23..16] Value of command byte */
           IO__ uint32_t padcode : 8;  /**< [31..24] First 8 bits to transmit during dummy cycles */
         } ffmt_bits;
       };
       uint32_t reserved6[2];

       union {
         IO__ uint32_t ie;  /**< @0x0000000020004070: Interrupt Enable Register */

         struct {
           I__  uint32_t txwm : 1;  /**< [0..0] Transmit watermark enable */
           I__  uint32_t rxwm : 1;  /**< [1..1] Receive watermark enable */
                uint32_t : 30;
         } ie_bits;
       };

       union {
         IO__ uint32_t ip;  /**< @0x0000000020004074: Interrupt Pending Register */

         struct {
           I__  uint32_t txwm : 1;  /**< [0..0] Transmit watermark pending */
           I__  uint32_t rxwm : 1;  /**< [1..1] Receive watermark pending */
                uint32_t : 30;
         } ip_bits;
       };
       uint32_t reserved7[994];
} sifive_e51arty_qspi_t; // 0x0000000020004FFF

// ----------------------------------------------------------------------------

/**
 * @brief Pulse-Width Modulation (PWM) Peripheral.
 */

typedef struct {

       union {
         IO__ uint32_t cfg;  /**< @0x0000000020005000: Configuration Register */

         struct {
           IO__ uint32_t scale : 4;  /**< [3..0] Counter scale */
                uint32_t : 4;
           IO__ uint32_t sticky : 1;  /**< [8..8] Sticky - disallow clearing pwmcmpXip bits */
           IO__ uint32_t zerocmp : 1;  /**< [9..9] Zero - counter resets to zero after match */
           IO__ uint32_t deglitch : 1;  /**< [10..10] Deglitch - latch pwmcmpXip within same cycle */
                uint32_t : 1;
           IO__ uint32_t enalways : 1;  /**< [12..12] Enable always - run continuously */
           IO__ uint32_t enoneshot : 1;  /**< [13..13] enable one shot - run one cycle */
                uint32_t : 2;
           IO__ uint32_t cmp0center : 1;  /**< [16..16] PWM0 Compare Center */
           IO__ uint32_t cmp1center : 1;  /**< [17..17] PWM1 Compare Center */
           IO__ uint32_t cmp2center : 1;  /**< [18..18] PWM2 Compare Center */
           IO__ uint32_t cmp3center : 1;  /**< [19..19] PWM3 Compare Center */
                uint32_t : 4;
           IO__ uint32_t cmp0gang : 1;  /**< [24..24] PWM0/PWM1 Compare Gang */
           IO__ uint32_t cmp1gang : 1;  /**< [25..25] PWM1/PWM2 Compare Gang */
           IO__ uint32_t cmp2gang : 1;  /**< [26..26] PWM2/PWM3 Compare Gang */
           IO__ uint32_t cmp3gang : 1;  /**< [27..27] PWM3/PWM0 Compare Gang */
           IO__ uint32_t cmp0ip : 1;  /**< [28..28] PWM0 Interrupt Pending */
           IO__ uint32_t cmp1ip : 1;  /**< [29..29] PWM1 Interrupt Pending */
           IO__ uint32_t cmp2ip : 1;  /**< [30..30] PWM2 Interrupt Pending */
           IO__ uint32_t cmp3ip : 1;  /**< [31..31] PWM3 Interrupt Pending */
         } cfg_bits;
       };
       uint32_t reserved1;
  IO__ uint32_t count;  /**< @0x0000000020005008: Configuration Register */
       uint32_t reserved2;

       union {
         IO__ uint32_t scale;  /**< @0x0000000020005010: Scale Register */

         struct {
           IO__ uint32_t value : 8;  /**< [7..0] Compare value */
                uint32_t : 24;
         } scale_bits;
       };
       uint32_t reserved3[3];

       union {
         IO__ uint32_t cmp[4];  /**< @0x0000000020005020: Compare Registers */

         struct {
           IO__ uint32_t value : 8;  /**< [7..0] Compare value */
                uint32_t : 24;
         } cmp_bits[4];
       };
       uint32_t reserved4[1012];
} sifive_e51arty_pwm_t; // 0x0000000020005FFF

// ----------------------------------------------------------------------------

/**
 * @brief Chip Select Modes Enumeration.
 */

typedef enum {
  sifive_e51arty_qspi_csmode_mode_auto = 0, /**< Assert/de-assert CS at the beginning/end of each frame */
  sifive_e51arty_qspi_csmode_mode_hold = 2, /**< Keep CS continuously asserted after the initial frame */
  sifive_e51arty_qspi_csmode_mode_off = 3, /**< Disable hardware control of the CS pin */
} sifive_e51arty_qspi_csmode_mode_enum_t;

// ----------------------------------------------------------------------------

/**
 * @brief SPI Protocol Enumeration.
 */

typedef enum {
  sifive_e51arty_qspi_fmt_proto_single = 0, /**< DQ0 (MOSI), DQ1 (MISO) */
  sifive_e51arty_qspi_fmt_proto_dual = 1, /**< DQ0, DQ1 */
  sifive_e51arty_qspi_fmt_proto_quad = 2, /**< DQ0, DQ1, DQ2, DQ3 */
} sifive_e51arty_qspi_fmt_proto_enum_t;

// ----------------------------------------------------------------------------

/**
 * @brief SPI Endianness Enumeration.
 */

typedef enum {
  sifive_e51arty_qspi_fmt_endian_msb = 0, /**< Transmit most-significant bit (MSB) first */
  sifive_e51arty_qspi_fmt_endian_lsb = 1, /**< Transmit least-significant bit (LSB) first */
} sifive_e51arty_qspi_fmt_endian_enum_t;

// ----------------------------------------------------------------------------

/**
 * @brief SPI I/O Direction Enumeration.
 */

typedef enum {
  sifive_e51arty_qspi_fmt_dir_rx = 0, /**< For dual and quad protocols, the DQ pins are tri-stated. For the single protocol, the DQ0 pin is driven with the transmit data as normal. */
  sifive_e51arty_qspi_fmt_dir_tx = 1, /**< The receive FIFO is not populated. */
} sifive_e51arty_qspi_fmt_dir_enum_t;

// ----------------------------------------------------------------------------
// Struct 'sifive_e51arty_plic_target0_m_t' positions & masks.

// Register 'plic.target0.m.threshold'.
#define SIFIVE_E51ARTY_PLIC_TARGET0_M_THRESHOLD_VALUE_POSITION  (0ul)
#define SIFIVE_E51ARTY_PLIC_TARGET0_M_THRESHOLD_VALUE_MASK  (0x7ul << 0ul)  /**< [2..0] The priority threshold value */

// ----------------------------------------------------------------------------
// Struct 'sifive_e51arty_plic_t' positions & masks.

// Register 'plic.priorities'.
#define SIFIVE_E51ARTY_PLIC_PRIORITIES_VALUE_POSITION  (0ul)
#define SIFIVE_E51ARTY_PLIC_PRIORITIES_VALUE_MASK  (0x7ul << 0ul)  /**< [2..0] The priority for a given global interrupt */

// ----------------------------------------------------------------------------
// Struct 'sifive_e51arty_uart_t' positions & masks.

// Register 'uart.txdata'.
#define SIFIVE_E51ARTY_UART_TXDATA_DATA_POSITION  (0ul)
#define SIFIVE_E51ARTY_UART_TXDATA_DATA_MASK  (0xFFul << 0ul)  /**< [7..0] Transmit data */
#define SIFIVE_E51ARTY_UART_TXDATA_FULL_POSITION  (31ul)
#define SIFIVE_E51ARTY_UART_TXDATA_FULL_MASK  (0x1ul << 31ul)  /**< [31..31] Transmit FIFO full */
#define SIFIVE_E51ARTY_UART_TXDATA_FULL  (1ul << 31ul)

// Register 'uart.rxdata'.
#define SIFIVE_E51ARTY_UART_RXDATA_DATA_POSITION  (0ul)
#define SIFIVE_E51ARTY_UART_RXDATA_DATA_MASK  (0xFFul << 0ul)  /**< [7..0] Received data */
#define SIFIVE_E51ARTY_UART_RXDATA_EMPTY_POSITION  (31ul)
#define SIFIVE_E51ARTY_UART_RXDATA_EMPTY_MASK  (0x1ul << 31ul)  /**< [31..31] Receive FIFO empty */
#define SIFIVE_E51ARTY_UART_RXDATA_EMPTY  (1ul << 31ul)

// Register 'uart.txctrl'.
#define SIFIVE_E51ARTY_UART_TXCTRL_TXEN_POSITION  (0ul)
#define SIFIVE_E51ARTY_UART_TXCTRL_TXEN_MASK  (0x1ul << 0ul)  /**< [0..0] Transmit enable */
#define SIFIVE_E51ARTY_UART_TXCTRL_TXEN  (1ul << 0ul)
#define SIFIVE_E51ARTY_UART_TXCTRL_NSTOP_POSITION  (1ul)
#define SIFIVE_E51ARTY_UART_TXCTRL_NSTOP_MASK  (0x1ul << 1ul)  /**< [1..1] Number of stop bits */
#define SIFIVE_E51ARTY_UART_TXCTRL_NSTOP  (1ul << 1ul)
#define SIFIVE_E51ARTY_UART_TXCTRL_TXCNT_POSITION  (16ul)
#define SIFIVE_E51ARTY_UART_TXCTRL_TXCNT_MASK  (0x7ul << 16ul)  /**< [18..16] Transmit watermark level */

// Register 'uart.rxctrl'.
#define SIFIVE_E51ARTY_UART_RXCTRL_RXEN_POSITION  (0ul)
#define SIFIVE_E51ARTY_UART_RXCTRL_RXEN_MASK  (0x1ul << 0ul)  /**< [0..0] Receive enable */
#define SIFIVE_E51ARTY_UART_RXCTRL_RXEN  (1ul << 0ul)
#define SIFIVE_E51ARTY_UART_RXCTRL_RXCNT_POSITION  (16ul)
#define SIFIVE_E51ARTY_UART_RXCTRL_RXCNT_MASK  (0x7ul << 16ul)  /**< [18..16] Receive watermark level */

// Register 'uart.ie'.
#define SIFIVE_E51ARTY_UART_IE_TXWM_POSITION  (0ul)
#define SIFIVE_E51ARTY_UART_IE_TXWM_MASK  (0x1ul << 0ul)  /**< [0..0] Transmit watermark interrupt enable */
#define SIFIVE_E51ARTY_UART_IE_TXWM  (1ul << 0ul)
#define SIFIVE_E51ARTY_UART_IE_RXWM_POSITION  (1ul)
#define SIFIVE_E51ARTY_UART_IE_RXWM_MASK  (0x1ul << 1ul)  /**< [1..1] Receive watermark interrupt enable */
#define SIFIVE_E51ARTY_UART_IE_RXWM  (1ul << 1ul)

// Register 'uart.ip'.
#define SIFIVE_E51ARTY_UART_IP_TXWM_POSITION  (0ul)
#define SIFIVE_E51ARTY_UART_IP_TXWM_MASK  (0x1ul << 0ul)  /**< [0..0] Transmit watermark interrupt pending */
#define SIFIVE_E51ARTY_UART_IP_TXWM  (1ul << 0ul)
#define SIFIVE_E51ARTY_UART_IP_RXWM_POSITION  (1ul)
#define SIFIVE_E51ARTY_UART_IP_RXWM_MASK  (0x1ul << 1ul)  /**< [1..1] Receive watermark interrupt pending */
#define SIFIVE_E51ARTY_UART_IP_RXWM  (1ul << 1ul)

// Register 'uart.div'.
#define SIFIVE_E51ARTY_UART_DIV_VALUE_POSITION  (0ul)
#define SIFIVE_E51ARTY_UART_DIV_VALUE_MASK  (0xFFFFul << 0ul)  /**< [15..0] Baud rate divisor */

// ----------------------------------------------------------------------------
// Struct 'sifive_e51arty_qspi_t' positions & masks.

// Register 'qspi.sckdiv'.
#define SIFIVE_E51ARTY_QSPI_SCKDIV_SCALE_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_SCKDIV_SCALE_MASK  (0xFFFul << 0ul)  /**< [11..0] Divisor for serial clock */

// Register 'qspi.sckmode'.
#define SIFIVE_E51ARTY_QSPI_SCKMODE_PHA_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_SCKMODE_PHA_MASK  (0x1ul << 0ul)  /**< [0..0] Serial clock phase */
#define SIFIVE_E51ARTY_QSPI_SCKMODE_PHA  (1ul << 0ul)
#define SIFIVE_E51ARTY_QSPI_SCKMODE_POL_POSITION  (1ul)
#define SIFIVE_E51ARTY_QSPI_SCKMODE_POL_MASK  (0x1ul << 1ul)  /**< [1..1] Serial clock polarity */
#define SIFIVE_E51ARTY_QSPI_SCKMODE_POL  (1ul << 1ul)

// Register 'qspi.csmode'.
#define SIFIVE_E51ARTY_QSPI_CSMODE_MODE_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_CSMODE_MODE_MASK  (0x3ul << 0ul)  /**< [1..0] Chip select mode */
#define SIFIVE_E51ARTY_QSPI_CSMODE_MODE_AUTO  (0ul << 0ul)  /**< Assert/de-assert CS at the beginning/end of each frame */
#define SIFIVE_E51ARTY_QSPI_CSMODE_MODE_HOLD  (2ul << 0ul)  /**< Keep CS continuously asserted after the initial frame */
#define SIFIVE_E51ARTY_QSPI_CSMODE_MODE_OFF  (3ul << 0ul)  /**< Disable hardware control of the CS pin */

// Register 'qspi.delay0'.
#define SIFIVE_E51ARTY_QSPI_DELAY0_CSSCK_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_DELAY0_CSSCK_MASK  (0xFFul << 0ul)  /**< [7..0] CS to SCK Delay */
#define SIFIVE_E51ARTY_QSPI_DELAY0_SCKCS_POSITION  (16ul)
#define SIFIVE_E51ARTY_QSPI_DELAY0_SCKCS_MASK  (0xFFul << 16ul)  /**< [23..16] SCK to CS Delay */

// Register 'qspi.delay1'.
#define SIFIVE_E51ARTY_QSPI_DELAY1_INTERCS_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_DELAY1_INTERCS_MASK  (0xFFul << 0ul)  /**< [7..0] Minimum CS inactive time */
#define SIFIVE_E51ARTY_QSPI_DELAY1_INTERXFR_POSITION  (16ul)
#define SIFIVE_E51ARTY_QSPI_DELAY1_INTERXFR_MASK  (0xFFul << 16ul)  /**< [23..16] Maximum interframe delay */

// Register 'qspi.fmt'.
#define SIFIVE_E51ARTY_QSPI_FMT_PROTO_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_FMT_PROTO_MASK  (0x3ul << 0ul)  /**< [1..0] SPI Protocol */
#define SIFIVE_E51ARTY_QSPI_FMT_PROTO_SINGLE  (0ul << 0ul)  /**< DQ0 (MOSI), DQ1 (MISO) */
#define SIFIVE_E51ARTY_QSPI_FMT_PROTO_DUAL  (1ul << 0ul)  /**< DQ0, DQ1 */
#define SIFIVE_E51ARTY_QSPI_FMT_PROTO_QUAD  (2ul << 0ul)  /**< DQ0, DQ1, DQ2, DQ3 */
#define SIFIVE_E51ARTY_QSPI_FMT_ENDIAN_POSITION  (2ul)
#define SIFIVE_E51ARTY_QSPI_FMT_ENDIAN_MASK  (0x1ul << 2ul)  /**< [2..2] SPI endianness */
#define SIFIVE_E51ARTY_QSPI_FMT_ENDIAN_MSB  (0ul << 2ul)  /**< Transmit most-significant bit (MSB) first */
#define SIFIVE_E51ARTY_QSPI_FMT_ENDIAN_LSB  (1ul << 2ul)  /**< Transmit least-significant bit (LSB) first */
#define SIFIVE_E51ARTY_QSPI_FMT_DIR_POSITION  (3ul)
#define SIFIVE_E51ARTY_QSPI_FMT_DIR_MASK  (0x1ul << 3ul)  /**< [3..3] SPI I/O Direction */
#define SIFIVE_E51ARTY_QSPI_FMT_DIR_RX  (0ul << 3ul)  /**< For dual and quad protocols, the DQ pins are tri-stated. For the single protocol, the DQ0 pin is driven with the transmit data as normal. */
#define SIFIVE_E51ARTY_QSPI_FMT_DIR_TX  (1ul << 3ul)  /**< The receive FIFO is not populated. */
#define SIFIVE_E51ARTY_QSPI_FMT_LEN_POSITION  (16ul)
#define SIFIVE_E51ARTY_QSPI_FMT_LEN_MASK  (0xFul << 16ul)  /**< [19..16] Number of bits per frame */

// Register 'qspi.txdata'.
#define SIFIVE_E51ARTY_QSPI_TXDATA_DATA_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_TXDATA_DATA_MASK  (0xFFul << 0ul)  /**< [7..0] Transmit data */
#define SIFIVE_E51ARTY_QSPI_TXDATA_FULL_POSITION  (31ul)
#define SIFIVE_E51ARTY_QSPI_TXDATA_FULL_MASK  (0x1ul << 31ul)  /**< [31..31] FIFO full flag */
#define SIFIVE_E51ARTY_QSPI_TXDATA_FULL  (1ul << 31ul)

// Register 'qspi.rxdata'.
#define SIFIVE_E51ARTY_QSPI_RXDATA_DATA_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_RXDATA_DATA_MASK  (0xFFul << 0ul)  /**< [7..0] Received data */
#define SIFIVE_E51ARTY_QSPI_RXDATA_EMPTY_POSITION  (31ul)
#define SIFIVE_E51ARTY_QSPI_RXDATA_EMPTY_MASK  (0x1ul << 31ul)  /**< [31..31] FIFO empty flag */
#define SIFIVE_E51ARTY_QSPI_RXDATA_EMPTY  (1ul << 31ul)

// Register 'qspi.txmark'.
#define SIFIVE_E51ARTY_QSPI_TXMARK_VALUE_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_TXMARK_VALUE_MASK  (0x7ul << 0ul)  /**< [2..0] Transmit watermark */

// Register 'qspi.rxmark'.
#define SIFIVE_E51ARTY_QSPI_RXMARK_VALUE_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_RXMARK_VALUE_MASK  (0x7ul << 0ul)  /**< [2..0] Receive watermark */

// Register 'qspi.fctrl'.
#define SIFIVE_E51ARTY_QSPI_FCTRL_EN_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_FCTRL_EN_MASK  (0x1ul << 0ul)  /**< [0..0] SPI Flash Mode Select */
#define SIFIVE_E51ARTY_QSPI_FCTRL_EN  (1ul << 0ul)

// Register 'qspi.ffmt'.
#define SIFIVE_E51ARTY_QSPI_FFMT_CMDEN_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_FFMT_CMDEN_MASK  (0x1ul << 0ul)  /**< [0..0] Enable sending of command */
#define SIFIVE_E51ARTY_QSPI_FFMT_CMDEN  (1ul << 0ul)
#define SIFIVE_E51ARTY_QSPI_FFMT_ADDRLEN_POSITION  (1ul)
#define SIFIVE_E51ARTY_QSPI_FFMT_ADDRLEN_MASK  (0x7ul << 1ul)  /**< [3..1] Number of address bytes(0 to 4) */
#define SIFIVE_E51ARTY_QSPI_FFMT_PADCNT_POSITION  (4ul)
#define SIFIVE_E51ARTY_QSPI_FFMT_PADCNT_MASK  (0xFul << 4ul)  /**< [7..4] Number of dummy cycles */
#define SIFIVE_E51ARTY_QSPI_FFMT_CMDPROTO_POSITION  (8ul)
#define SIFIVE_E51ARTY_QSPI_FFMT_CMDPROTO_MASK  (0x3ul << 8ul)  /**< [9..8] Protocol for transmitting command */
#define SIFIVE_E51ARTY_QSPI_FFMT_ADDRPROTO_POSITION  (10ul)
#define SIFIVE_E51ARTY_QSPI_FFMT_ADDRPROTO_MASK  (0x3ul << 10ul)  /**< [11..10] Protocol for transmitting address and padding */
#define SIFIVE_E51ARTY_QSPI_FFMT_DATAPROTO_POSITION  (12ul)
#define SIFIVE_E51ARTY_QSPI_FFMT_DATAPROTO_MASK  (0x3ul << 12ul)  /**< [13..12] Protocol for receiving data bytes */
#define SIFIVE_E51ARTY_QSPI_FFMT_CMDCODE_POSITION  (16ul)
#define SIFIVE_E51ARTY_QSPI_FFMT_CMDCODE_MASK  (0xFFul << 16ul)  /**< [23..16] Value of command byte */
#define SIFIVE_E51ARTY_QSPI_FFMT_PADCODE_POSITION  (24ul)
#define SIFIVE_E51ARTY_QSPI_FFMT_PADCODE_MASK  (0xFFul << 24ul)  /**< [31..24] First 8 bits to transmit during dummy cycles */

// Register 'qspi.ie'.
#define SIFIVE_E51ARTY_QSPI_IE_TXWM_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_IE_TXWM_MASK  (0x1ul << 0ul)  /**< [0..0] Transmit watermark enable */
#define SIFIVE_E51ARTY_QSPI_IE_TXWM  (1ul << 0ul)
#define SIFIVE_E51ARTY_QSPI_IE_RXWM_POSITION  (1ul)
#define SIFIVE_E51ARTY_QSPI_IE_RXWM_MASK  (0x1ul << 1ul)  /**< [1..1] Receive watermark enable */
#define SIFIVE_E51ARTY_QSPI_IE_RXWM  (1ul << 1ul)

// Register 'qspi.ip'.
#define SIFIVE_E51ARTY_QSPI_IP_TXWM_POSITION  (0ul)
#define SIFIVE_E51ARTY_QSPI_IP_TXWM_MASK  (0x1ul << 0ul)  /**< [0..0] Transmit watermark pending */
#define SIFIVE_E51ARTY_QSPI_IP_TXWM  (1ul << 0ul)
#define SIFIVE_E51ARTY_QSPI_IP_RXWM_POSITION  (1ul)
#define SIFIVE_E51ARTY_QSPI_IP_RXWM_MASK  (0x1ul << 1ul)  /**< [1..1] Receive watermark pending */
#define SIFIVE_E51ARTY_QSPI_IP_RXWM  (1ul << 1ul)

// ----------------------------------------------------------------------------
// Struct 'sifive_e51arty_pwm_t' positions & masks.

// Register 'pwm.cfg'.
#define SIFIVE_E51ARTY_PWM_CFG_SCALE_POSITION  (0ul)
#define SIFIVE_E51ARTY_PWM_CFG_SCALE_MASK  (0xFul << 0ul)  /**< [3..0] Counter scale */
#define SIFIVE_E51ARTY_PWM_CFG_STICKY_POSITION  (8ul)
#define SIFIVE_E51ARTY_PWM_CFG_STICKY_MASK  (0x1ul << 8ul)  /**< [8..8] Sticky - disallow clearing pwmcmpXip bits */
#define SIFIVE_E51ARTY_PWM_CFG_STICKY  (1ul << 8ul)
#define SIFIVE_E51ARTY_PWM_CFG_ZEROCMP_POSITION  (9ul)
#define SIFIVE_E51ARTY_PWM_CFG_ZEROCMP_MASK  (0x1ul << 9ul)  /**< [9..9] Zero - counter resets to zero after match */
#define SIFIVE_E51ARTY_PWM_CFG_ZEROCMP  (1ul << 9ul)
#define SIFIVE_E51ARTY_PWM_CFG_DEGLITCH_POSITION  (10ul)
#define SIFIVE_E51ARTY_PWM_CFG_DEGLITCH_MASK  (0x1ul << 10ul)  /**< [10..10] Deglitch - latch pwmcmpXip within same cycle */
#define SIFIVE_E51ARTY_PWM_CFG_DEGLITCH  (1ul << 10ul)
#define SIFIVE_E51ARTY_PWM_CFG_ENALWAYS_POSITION  (12ul)
#define SIFIVE_E51ARTY_PWM_CFG_ENALWAYS_MASK  (0x1ul << 12ul)  /**< [12..12] Enable always - run continuously */
#define SIFIVE_E51ARTY_PWM_CFG_ENALWAYS  (1ul << 12ul)
#define SIFIVE_E51ARTY_PWM_CFG_ENONESHOT_POSITION  (13ul)
#define SIFIVE_E51ARTY_PWM_CFG_ENONESHOT_MASK  (0x1ul << 13ul)  /**< [13..13] enable one shot - run one cycle */
#define SIFIVE_E51ARTY_PWM_CFG_ENONESHOT  (1ul << 13ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP0CENTER_POSITION  (16ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP0CENTER_MASK  (0x1ul << 16ul)  /**< [16..16] PWM0 Compare Center */
#define SIFIVE_E51ARTY_PWM_CFG_CMP0CENTER  (1ul << 16ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP1CENTER_POSITION  (17ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP1CENTER_MASK  (0x1ul << 17ul)  /**< [17..17] PWM1 Compare Center */
#define SIFIVE_E51ARTY_PWM_CFG_CMP1CENTER  (1ul << 17ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP2CENTER_POSITION  (18ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP2CENTER_MASK  (0x1ul << 18ul)  /**< [18..18] PWM2 Compare Center */
#define SIFIVE_E51ARTY_PWM_CFG_CMP2CENTER  (1ul << 18ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP3CENTER_POSITION  (19ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP3CENTER_MASK  (0x1ul << 19ul)  /**< [19..19] PWM3 Compare Center */
#define SIFIVE_E51ARTY_PWM_CFG_CMP3CENTER  (1ul << 19ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP0GANG_POSITION  (24ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP0GANG_MASK  (0x1ul << 24ul)  /**< [24..24] PWM0/PWM1 Compare Gang */
#define SIFIVE_E51ARTY_PWM_CFG_CMP0GANG  (1ul << 24ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP1GANG_POSITION  (25ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP1GANG_MASK  (0x1ul << 25ul)  /**< [25..25] PWM1/PWM2 Compare Gang */
#define SIFIVE_E51ARTY_PWM_CFG_CMP1GANG  (1ul << 25ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP2GANG_POSITION  (26ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP2GANG_MASK  (0x1ul << 26ul)  /**< [26..26] PWM2/PWM3 Compare Gang */
#define SIFIVE_E51ARTY_PWM_CFG_CMP2GANG  (1ul << 26ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP3GANG_POSITION  (27ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP3GANG_MASK  (0x1ul << 27ul)  /**< [27..27] PWM3/PWM0 Compare Gang */
#define SIFIVE_E51ARTY_PWM_CFG_CMP3GANG  (1ul << 27ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP0IP_POSITION  (28ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP0IP_MASK  (0x1ul << 28ul)  /**< [28..28] PWM0 Interrupt Pending */
#define SIFIVE_E51ARTY_PWM_CFG_CMP0IP  (1ul << 28ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP1IP_POSITION  (29ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP1IP_MASK  (0x1ul << 29ul)  /**< [29..29] PWM1 Interrupt Pending */
#define SIFIVE_E51ARTY_PWM_CFG_CMP1IP  (1ul << 29ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP2IP_POSITION  (30ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP2IP_MASK  (0x1ul << 30ul)  /**< [30..30] PWM2 Interrupt Pending */
#define SIFIVE_E51ARTY_PWM_CFG_CMP2IP  (1ul << 30ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP3IP_POSITION  (31ul)
#define SIFIVE_E51ARTY_PWM_CFG_CMP3IP_MASK  (0x1ul << 31ul)  /**< [31..31] PWM3 Interrupt Pending */
#define SIFIVE_E51ARTY_PWM_CFG_CMP3IP  (1ul << 31ul)

// Register 'pwm.scale'.
#define SIFIVE_E51ARTY_PWM_SCALE_VALUE_POSITION  (0ul)
#define SIFIVE_E51ARTY_PWM_SCALE_VALUE_MASK  (0xFFul << 0ul)  /**< [7..0] Compare value */

// Register 'pwm.cmp'.
#define SIFIVE_E51ARTY_PWM_CMP_VALUE_POSITION  (0ul)
#define SIFIVE_E51ARTY_PWM_CMP_VALUE_MASK  (0xFFul << 0ul)  /**< [7..0] Compare value */

// ----------------------------------------------------------------------------
// Peripheral 'clint' offsets.

#define SIFIVE_E51ARTY_CLINT_MSIP_OFFSET (0x0000000000000000ul)  /**< 0x0000000002000000: MSIP (Machine-mode Software Interrupts) Register per Hart */
#define SIFIVE_E51ARTY_CLINT_MTIMECMP_OFFSET (0x0000000000004000ul)  /**< 0x0000000002004000: Machine Time Compare Registers per Hart */
#define SIFIVE_E51ARTY_CLINT_MTIME_OFFSET (0x000000000000BFF8ul)  /**< 0x000000000200BFF8: Machine Time Register */

// ----------------------------------------------------------------------------
// Peripheral 'plic' offsets.

#define SIFIVE_E51ARTY_PLIC_PRIORITIES_OFFSET (0x0000000000000004ul)  /**< 0x000000000C000004: Interrupt Priorities Registers */
#define SIFIVE_E51ARTY_PLIC_PENDINGS_OFFSET (0x0000000000001000ul)  /**< 0x000000000C001000: Interrupt Pending Bits Registers */
#define SIFIVE_E51ARTY_PLIC_ENABLESTARGET0_OFFSET (0x0000000000002000ul)  /**< 0x000000000C002000: Hart 0 Interrupt Enable Bits */
#define SIFIVE_E51ARTY_PLIC_ENABLESTARGET0_M_OFFSET (0x0000000000002000ul)  /**< 0x000000000C002000: Hart 0 M-mode Interrupt Enable Bits */
#define SIFIVE_E51ARTY_PLIC_ENABLESTARGET0_M_ENABLES_OFFSET (0x0000000000002000ul)  /**< 0x000000000C002000: Interrupt Enable Bits Registers */
#define SIFIVE_E51ARTY_PLIC_TARGET0_OFFSET (0x0000000000200000ul)  /**< 0x000000000C200000: Hart 0 Interrupt Thresholds */
#define SIFIVE_E51ARTY_PLIC_TARGET0_M_OFFSET (0x0000000000200000ul)  /**< 0x000000000C200000: Hart 0 M-Mode Interrupt Threshold */
#define SIFIVE_E51ARTY_PLIC_TARGET0_M_THRESHOLD_OFFSET (0x0000000000200000ul)  /**< 0x000000000C200000: The Priority Threshold Register */
#define SIFIVE_E51ARTY_PLIC_TARGET0_M_CLAIMCOMPLETE_OFFSET (0x0000000000200004ul)  /**< 0x000000000C200004: The Interrupt Claim/Completion Register */

// ----------------------------------------------------------------------------
// Peripheral 'uart' offsets.

#define SIFIVE_E51ARTY_UART_TXDATA_OFFSET (0x0000000000000000ul)  /**< 0x0000000020000000: Transmit Data Register */
#define SIFIVE_E51ARTY_UART_RXDATA_OFFSET (0x0000000000000004ul)  /**< 0x0000000020000004: Receive Data Register */
#define SIFIVE_E51ARTY_UART_TXCTRL_OFFSET (0x0000000000000008ul)  /**< 0x0000000020000008: Transmit Control Register  */
#define SIFIVE_E51ARTY_UART_RXCTRL_OFFSET (0x000000000000000Cul)  /**< 0x000000002000000C: Receive Control Register */
#define SIFIVE_E51ARTY_UART_IE_OFFSET (0x0000000000000010ul)  /**< 0x0000000020000010: Interrupt Enable Register */
#define SIFIVE_E51ARTY_UART_IP_OFFSET (0x0000000000000014ul)  /**< 0x0000000020000014: Interrupt Pending Register */
#define SIFIVE_E51ARTY_UART_DIV_OFFSET (0x0000000000000018ul)  /**< 0x0000000020000018: Baud Rate Divisor Register */

// ----------------------------------------------------------------------------
// Peripheral 'gpio' offsets.

#define SIFIVE_E51ARTY_GPIO_VALUE_OFFSET (0x0000000000000000ul)  /**< 0x0000000020002000: Pin Value Register */
#define SIFIVE_E51ARTY_GPIO_INPUTEN_OFFSET (0x0000000000000004ul)  /**< 0x0000000020002004: Pin Input Enable Register */
#define SIFIVE_E51ARTY_GPIO_OUTPUTEN_OFFSET (0x0000000000000008ul)  /**< 0x0000000020002008: Pin Output Enable Register */
#define SIFIVE_E51ARTY_GPIO_PORT_OFFSET (0x000000000000000Cul)  /**< 0x000000002000200C: Output Port Value Register */
#define SIFIVE_E51ARTY_GPIO_PUE_OFFSET (0x0000000000000010ul)  /**< 0x0000000020002010: Internal Pull-up Enable Register */
#define SIFIVE_E51ARTY_GPIO_DS_OFFSET (0x0000000000000014ul)  /**< 0x0000000020002014: Pin Drive Strength Register */
#define SIFIVE_E51ARTY_GPIO_RISEIE_OFFSET (0x0000000000000018ul)  /**< 0x0000000020002018: Rise Interrupt Enable Register */
#define SIFIVE_E51ARTY_GPIO_RISEIP_OFFSET (0x000000000000001Cul)  /**< 0x000000002000201C: Rise Interrupt Pending Register */
#define SIFIVE_E51ARTY_GPIO_FALLIE_OFFSET (0x0000000000000020ul)  /**< 0x0000000020002020: Fall Interrupt Enable Register */
#define SIFIVE_E51ARTY_GPIO_FALLIP_OFFSET (0x0000000000000024ul)  /**< 0x0000000020002024: Fall Interrupt Pending Register */
#define SIFIVE_E51ARTY_GPIO_HIGHIE_OFFSET (0x0000000000000028ul)  /**< 0x0000000020002028: High Interrupt Enable Register */
#define SIFIVE_E51ARTY_GPIO_HIGHIP_OFFSET (0x000000000000002Cul)  /**< 0x000000002000202C: High Interrupt Pending Register */
#define SIFIVE_E51ARTY_GPIO_LOWIE_OFFSET (0x0000000000000030ul)  /**< 0x0000000020002030: Low Interrupt Enable Register */
#define SIFIVE_E51ARTY_GPIO_LOWIP_OFFSET (0x0000000000000034ul)  /**< 0x0000000020002034: Low Interrupt Pending Register */
#define SIFIVE_E51ARTY_GPIO_IOFEN_OFFSET (0x0000000000000038ul)  /**< 0x0000000020002038: HW I/O Function Enable Register */
#define SIFIVE_E51ARTY_GPIO_IOFSEL_OFFSET (0x000000000000003Cul)  /**< 0x000000002000203C: HW I/O Function Select Register */
#define SIFIVE_E51ARTY_GPIO_OUTXOR_OFFSET (0x0000000000000040ul)  /**< 0x0000000020002040: Output XOR (invert) Register */

// ----------------------------------------------------------------------------
// Peripheral 'qspi' offsets.

#define SIFIVE_E51ARTY_QSPI_SCKDIV_OFFSET (0x0000000000000000ul)  /**< 0x0000000020004000: Serial clock divisor Register */
#define SIFIVE_E51ARTY_QSPI_SCKMODE_OFFSET (0x0000000000000004ul)  /**< 0x0000000020004004: Serial Clock Mode Register */
#define SIFIVE_E51ARTY_QSPI_CSID_OFFSET (0x0000000000000010ul)  /**< 0x0000000020004010: Chip Select ID Register */
#define SIFIVE_E51ARTY_QSPI_CSDEF_OFFSET (0x0000000000000014ul)  /**< 0x0000000020004014: Chip Select Default Register */
#define SIFIVE_E51ARTY_QSPI_CSMODE_OFFSET (0x0000000000000018ul)  /**< 0x0000000020004018: Chip Select Mode Register */
#define SIFIVE_E51ARTY_QSPI_DELAY0_OFFSET (0x0000000000000028ul)  /**< 0x0000000020004028: Delay Control 0 Register */
#define SIFIVE_E51ARTY_QSPI_DELAY1_OFFSET (0x000000000000002Cul)  /**< 0x000000002000402C: Delay Control 1 Register */
#define SIFIVE_E51ARTY_QSPI_FMT_OFFSET (0x0000000000000040ul)  /**< 0x0000000020004040: Frame Format Register */
#define SIFIVE_E51ARTY_QSPI_TXDATA_OFFSET (0x0000000000000048ul)  /**< 0x0000000020004048: Tx FIFO Data Register */
#define SIFIVE_E51ARTY_QSPI_RXDATA_OFFSET (0x000000000000004Cul)  /**< 0x000000002000404C: Rx FIFO Data Register */
#define SIFIVE_E51ARTY_QSPI_TXMARK_OFFSET (0x0000000000000050ul)  /**< 0x0000000020004050: Tx FIFO Watermark Register */
#define SIFIVE_E51ARTY_QSPI_RXMARK_OFFSET (0x0000000000000054ul)  /**< 0x0000000020004054: Rx FIFO Watermark Register */
#define SIFIVE_E51ARTY_QSPI_FCTRL_OFFSET (0x0000000000000060ul)  /**< 0x0000000020004060: Flash Interface Control Register */
#define SIFIVE_E51ARTY_QSPI_FFMT_OFFSET (0x0000000000000064ul)  /**< 0x0000000020004064: Flash Instruction Format Register */
#define SIFIVE_E51ARTY_QSPI_IE_OFFSET (0x0000000000000070ul)  /**< 0x0000000020004070: Interrupt Enable Register */
#define SIFIVE_E51ARTY_QSPI_IP_OFFSET (0x0000000000000074ul)  /**< 0x0000000020004074: Interrupt Pending Register */

// ----------------------------------------------------------------------------
// Peripheral 'pwm' offsets.

#define SIFIVE_E51ARTY_PWM_CFG_OFFSET (0x0000000000000000ul)  /**< 0x0000000020005000: Configuration Register */
#define SIFIVE_E51ARTY_PWM_COUNT_OFFSET (0x0000000000000008ul)  /**< 0x0000000020005008: Configuration Register */
#define SIFIVE_E51ARTY_PWM_SCALE_OFFSET (0x0000000000000010ul)  /**< 0x0000000020005010: Scale Register */
#define SIFIVE_E51ARTY_PWM_CMP_OFFSET (0x0000000000000020ul)  /**< 0x0000000020005020: Compare Registers */

// ----------------------------------------------------------------------------
// Peripherals memory map.

#define SIFIVE_E51ARTY_CLINT_BASE_ADDRESS  (0x0000000002000000ul)
#define SIFIVE_E51ARTY_PLIC_BASE_ADDRESS  (0x000000000C000000ul)
#define SIFIVE_E51ARTY_UART0_BASE_ADDRESS  (0x0000000020000000ul)
#define SIFIVE_E51ARTY_GPIO_BASE_ADDRESS  (0x0000000020002000ul)
#define SIFIVE_E51ARTY_QSPI0_BASE_ADDRESS  (0x0000000020004000ul)
#define SIFIVE_E51ARTY_PWM0_BASE_ADDRESS  (0x0000000020005000ul)

// ----------------------------------------------------------------------------
// Peripherals declarations.

#define CLINT  ((sifive_e51arty_clint_t*) SIFIVE_E51ARTY_CLINT_BASE_ADDRESS)
#define PLIC  ((sifive_e51arty_plic_t*) SIFIVE_E51ARTY_PLIC_BASE_ADDRESS)
#define UART0  ((sifive_e51arty_uart_t*) SIFIVE_E51ARTY_UART0_BASE_ADDRESS)
#define GPIO  ((sifive_e51arty_gpio_t*) SIFIVE_E51ARTY_GPIO_BASE_ADDRESS)
#define QSPI0  ((sifive_e51arty_qspi_t*) SIFIVE_E51ARTY_QSPI0_BASE_ADDRESS)
#define PWM0  ((sifive_e51arty_pwm_t*) SIFIVE_E51ARTY_PWM0_BASE_ADDRESS)

// ----------------------------------------------------------------------------

/**
 * @}
 */ /* End of group device-peripheral-registers */

/**
 * @} 
 */ /* End of group e31arty */

/**
 * @} 
 */ /* End of group sifive */

#if defined(__cplusplus)
}
#endif

// ----------------------------------------------------------------------------

#endif /* SIFIVE_DEVICES_ARTY_E51_DEVICE_PERIPHERALS_H_ */