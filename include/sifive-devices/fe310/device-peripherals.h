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

#ifndef SIFIVE_DEVICES_FE310_DEVICE_PERIPHERALS_H_
#define SIFIVE_DEVICES_FE310_DEVICE_PERIPHERALS_H_

// ----------------------------------------------------------------------------

/**
 * @brief µOS++ Core - device peripherals header file
 *  for Freedom E310-G000 from SiFive, Inc.
 * @version 0.1.0
 * @date 2017-10-28
 * @note Generated from fe310-xsvd.json@0.1.0 with xsvd@0.2.3.
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
 * @addtogroup fe310
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
  sifive_fe310_interrupt_global_wdogcmp = 1, /**< Watchdog Compare Interrupt */
  sifive_fe310_interrupt_global_rtcmp = 2, /**< RTC Compare Interrupt */
  sifive_fe310_interrupt_global_uart0 = 3, /**< UART0 Interrupt */
  sifive_fe310_interrupt_global_uart1 = 4, /**< UART1 Interrupt */
  sifive_fe310_interrupt_global_qspi0 = 5, /**< QSPI0 Interrupt */
  sifive_fe310_interrupt_global_qspi1 = 6, /**< QSPI0 Interrupt */
  sifive_fe310_interrupt_global_qspi2 = 7, /**< QSPI2 Interrupt */
  sifive_fe310_interrupt_global_gpio0 = 8, /**< GPIO0 Interrupt */
  sifive_fe310_interrupt_global_gpio1 = 9, /**< GPIO1 Interrupt */
  sifive_fe310_interrupt_global_gpio2 = 10, /**< GPIO2 Interrupt */
  sifive_fe310_interrupt_global_gpio3 = 11, /**< GPIO3 Interrupt */
  sifive_fe310_interrupt_global_gpio4 = 12, /**< GPIO4 Interrupt */
  sifive_fe310_interrupt_global_gpio5 = 13, /**< GPIO5 Interrupt */
  sifive_fe310_interrupt_global_gpio6 = 14, /**< GPIO6 Interrupt */
  sifive_fe310_interrupt_global_gpio7 = 15, /**< GPIO7 Interrupt */
  sifive_fe310_interrupt_global_gpio8 = 16, /**< GPIO8 Interrupt */
  sifive_fe310_interrupt_global_gpio9 = 17, /**< GPIO9 Interrupt */
  sifive_fe310_interrupt_global_gpio10 = 18, /**< GPIO10 Interrupt */
  sifive_fe310_interrupt_global_gpio11 = 19, /**< GPIO11 Interrupt */
  sifive_fe310_interrupt_global_gpio12 = 20, /**< GPIO12 Interrupt */
  sifive_fe310_interrupt_global_gpio13 = 21, /**< GPIO13 Interrupt */
  sifive_fe310_interrupt_global_gpio14 = 22, /**< GPIO14 Interrupt */
  sifive_fe310_interrupt_global_gpio15 = 23, /**< GPIO15 Interrupt */
  sifive_fe310_interrupt_global_gpio16 = 24, /**< GPIO16 Interrupt */
  sifive_fe310_interrupt_global_gpio17 = 25, /**< GPIO17 Interrupt */
  sifive_fe310_interrupt_global_gpio18 = 26, /**< GPIO18 Interrupt */
  sifive_fe310_interrupt_global_gpio19 = 27, /**< GPIO19 Interrupt */
  sifive_fe310_interrupt_global_gpio20 = 28, /**< GPIO20 Interrupt */
  sifive_fe310_interrupt_global_gpio21 = 29, /**< GPIO21 Interrupt */
  sifive_fe310_interrupt_global_gpio22 = 30, /**< GPIO22 Interrupt */
  sifive_fe310_interrupt_global_gpio23 = 31, /**< GPIO23 Interrupt */
  sifive_fe310_interrupt_global_gpio24 = 32, /**< GPIO24 Interrupt */
  sifive_fe310_interrupt_global_gpio25 = 33, /**< GPIO25 Interrupt */
  sifive_fe310_interrupt_global_gpio26 = 34, /**< GPIO26 Interrupt */
  sifive_fe310_interrupt_global_gpio27 = 35, /**< GPIO27 Interrupt */
  sifive_fe310_interrupt_global_gpio28 = 36, /**< GPIO28 Interrupt */
  sifive_fe310_interrupt_global_gpio29 = 37, /**< GPIO29 Interrupt */
  sifive_fe310_interrupt_global_gpio30 = 38, /**< GPIO30 Interrupt */
  sifive_fe310_interrupt_global_gpio31 = 39, /**< GPIO31 Interrupt */
  sifive_fe310_interrupt_global_pwm0cmp0 = 40, /**< PWM0 Compare 0 Interrupt */
  sifive_fe310_interrupt_global_pwm0cmp1 = 41, /**< PWM0 Compare 1 Interrupt */
  sifive_fe310_interrupt_global_pwm0cmp2 = 42, /**< PWM0 Compare 2 Interrupt */
  sifive_fe310_interrupt_global_pwm0cmp3 = 43, /**< PWM0 Compare 3 Interrupt */
  sifive_fe310_interrupt_global_pwm1cmp0 = 44, /**< PWM1 Compare 0 Interrupt */
  sifive_fe310_interrupt_global_pwm1cmp1 = 45, /**< PWM1 Compare 1 Interrupt */
  sifive_fe310_interrupt_global_pwm1cmp2 = 46, /**< PWM1 Compare 2 Interrupt */
  sifive_fe310_interrupt_global_pwm1cmp3 = 47, /**< PWM1 Compare 3 Interrupt */
  sifive_fe310_interrupt_global_pwm2cmp0 = 48, /**< PWM2 Compare 0 Interrupt */
  sifive_fe310_interrupt_global_pwm2cmp1 = 49, /**< PWM2 Compare 1 Interrupt */
  sifive_fe310_interrupt_global_pwm2cmp2 = 50, /**< PWM2 Compare 2 Interrupt */
  sifive_fe310_interrupt_global_pwm2cmp3 = 51, /**< PWM2 Compare 3 Interrupt */
} riscv_interrupts_global_enum_t;

#define RISCV_INTERRUPTS_GLOBAL_PRIORITY_BITS  (3u)
#define RISCV_INTERRUPTS_GLOBAL_PRIORITY_LEVELS  (7u)
#define RISCV_INTERRUPTS_GLOBAL_LAST_NUMBER  (51u)

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
 * @brief Machine Time Compare Registers per Hart.
 */

typedef struct {
  IO__ uint32_t low;  /**< @0x02004000: Machine Compare Register Low */
  IO__ uint32_t high;  /**< @0x02004004: Machine Compare Register High */
} sifive_fe310_clint_mtimecmp_t; // 0x02004007

// ----------------------------------------------------------------------------

/**
 * @brief Machine Time Register.
 */

typedef struct {
  I__  uint32_t low;  /**< @0x0200BFF8: Machine Time Register Low */
  I__  uint32_t high;  /**< @0x0200BFFC: Machine Time Register High */
} sifive_fe310_clint_mtime_t; // 0x0200BFFF

// ----------------------------------------------------------------------------

/**
 * @brief Core Complex Local Interruptor (CLINT) Peripheral.
 */

typedef struct {
  IO__ uint32_t msip[1];  /**< @0x02000000: MSIP (Machine-mode Software Interrupts) Register per Hart */
       uint32_t reserved1[4095];
       sifive_fe310_clint_mtimecmp_t mtimecmp[1];  /**< @0x02004000: Machine Time Compare Registers per Hart */
       uint64_t reserved2[4094];
       sifive_fe310_clint_mtime_t mtime;  /**< @0x0200BFF8: Machine Time Register */
       uint32_t reserved3[4096];
} sifive_fe310_clint_t; // 0x0200FFFF

// ----------------------------------------------------------------------------

/**
 * @brief Hart 0 M-mode Interrupt Enable Bits.
 */

typedef struct {
  IO__ uint32_t enables[2];  /**< @0x0C002000: Interrupt Enable Bits Registers */
} sifive_fe310_plic_enablestarget0_m_t; // 0x0C002007

// ----------------------------------------------------------------------------

/**
 * @brief Hart 0 Interrupt Enable Bits.
 */

typedef struct {
       sifive_fe310_plic_enablestarget0_m_t m;  /**< @0x0C002000: Hart 0 M-mode Interrupt Enable Bits */
} sifive_fe310_plic_enablestarget0_t; // 0x0C002007

// ----------------------------------------------------------------------------

/**
 * @brief Hart 0 M-Mode Interrupt Threshold.
 */

typedef struct {

       union {
         IO__ uint32_t threshold;  /**< @0x0C200000: The Priority Threshold Register */

         struct {
           IO__ uint32_t value : 3;  /**< [2..0] The priority threshold value */
                uint32_t : 29;
         } threshold_bits;
       };
  IO__ uint32_t claimcomplete;  /**< @0x0C200004: The Interrupt Claim/Completion Register */
} sifive_fe310_plic_target0_m_t; // 0x0C200007

// ----------------------------------------------------------------------------

/**
 * @brief Hart 0 Interrupt Thresholds.
 */

typedef struct {
       sifive_fe310_plic_target0_m_t m;  /**< @0x0C200000: Hart 0 M-Mode Interrupt Threshold */
} sifive_fe310_plic_target0_t; // 0x0C200007

// ----------------------------------------------------------------------------

/**
 * @brief Platform-Level Interrupt Controller (PLIC) Peripheral.
 */

typedef struct {
       uint32_t reserved1;

       union {
         IO__ uint32_t priorities[51];  /**< @0x0C000004: Interrupt Priorities Registers */

         struct {
           IO__ uint32_t value : 3;  /**< [2..0] The priority for a given global interrupt */
                uint32_t : 29;
         } priorities_bits[51];
       };
       uint32_t reserved2[972];
  I__  uint32_t pendings[2];  /**< @0x0C001000: Interrupt Pending Bits Registers */
       uint64_t reserved3[511];
       sifive_fe310_plic_enablestarget0_t enablestarget0;  /**< @0x0C002000: Hart 0 Interrupt Enable Bits */
       uint64_t reserved4[261119];
       sifive_fe310_plic_target0_t target0;  /**< @0x0C200000: Hart 0 Interrupt Thresholds */
       uint32_t reserved5[16252926];
} sifive_fe310_plic_t; // 0x0FFFFFFF

// ----------------------------------------------------------------------------

/**
 * @brief Always-On (AON) Domain.
 */

typedef struct {

       union {
         IO__ uint32_t wdogcfg;  /**< @0x10000000: Watchdog Configuration Register */

         struct {
           IO__ uint32_t scale : 4;  /**< [3..0] Watchdog counter scale */
                uint32_t : 4;
           IO__ uint32_t rsten : 1;  /**< [8..8] Watchdog full reset enable */
           IO__ uint32_t zerocmp : 1;  /**< [9..9] Watchdog zero on comparator */
                uint32_t : 2;
           IO__ uint32_t enalways : 1;  /**< [12..12] Watchdog enable counter always */
           IO__ uint32_t encoreawake : 1;  /**< [13..13] Watchdog counter only when awake */
                uint32_t : 14;
           IO__ uint32_t cmpip : 1;  /**< [28..28] Watchdog interrupt pending */
                uint32_t : 3;
         } wdogcfg_bits;
       };
       uint32_t reserved1;
  IO__ uint32_t wdogcount;  /**< @0x10000008: Watchdog Count Register */
       uint32_t reserved2;

       union {
         IO__ uint32_t wdogs;  /**< @0x10000010: Watchdog Scale Register */

         struct {
           IO__ uint32_t scale : 16;  /**< [15..0] Watchdog scale value */
                uint32_t : 16;
         } wdogs_bits;
       };
       uint32_t reserved3;
  IO__ uint32_t wdogfeed;  /**< @0x10000018: Watchdog Feed Address Register */
  IO__ uint32_t wdogkey;  /**< @0x1000001C: Watchdog Key Register */

       union {
         IO__ uint32_t wdogcmp;  /**< @0x10000020: Watchdog Compare Register */

         struct {
           IO__ uint32_t cmp : 16;  /**< [15..0] Watchdog compare value */
                uint32_t : 16;
         } wdogcmp_bits;
       };
       uint32_t reserved4[7];

       union {
         IO__ uint32_t rtccfg;  /**< @0x10000040: RTC Configuration Register */

         struct {
           IO__ uint32_t scale : 4;  /**< [3..0] RTC clock rate scale */
                uint32_t : 8;
           IO__ uint32_t enalways : 1;  /**< [12..12] RTC counter enable */
                uint32_t : 15;
           I__  uint32_t cmpip : 1;  /**< [28..28] RTC comparator interrupt pending */
                uint32_t : 3;
         } rtccfg_bits;
       };
       uint32_t reserved5;
  IO__ uint32_t rtclo;  /**< @0x10000048: RTC Counter Register Low */

       union {
         IO__ uint32_t rtchi;  /**< @0x1000004C: RTC Counter Register High */

         struct {
           IO__ uint32_t high : 16;  /**< [15..0] RTC counter register, high bits */
                uint32_t : 16;
         } rtchi_bits;
       };
  IO__ uint32_t rtcs;  /**< @0x10000050: RTC Scale Register */
       uint32_t reserved6[3];
  IO__ uint32_t rtccmp;  /**< @0x10000060: RTC Compare Register */
       uint32_t reserved7[3];

       union {
         IO__ uint32_t lfrosccfg;  /**< @0x10000070: Internal Programmable Low-Frequency Ring Oscillator Register */

         struct {
           IO__ uint32_t div : 6;  /**< [5..0] LFROSC divider */
                uint32_t : 10;
           IO__ uint32_t trim : 5;  /**< [20..16] LFROSC trim value */
                uint32_t : 9;
           IO__ uint32_t en : 1;  /**< [30..30] LFROSC enable */
           I__  uint32_t rdy : 1;  /**< [31..31] LFROSC ready */
         } lfrosccfg_bits;
       };
       uint32_t reserved8[3];
  IO__ uint32_t backup[32];  /**< @0x10000080: Backup Registers */
  IO__ uint32_t pmuwakeupi[8];  /**< @0x10000100: Wakeup program instruction Registers */
  IO__ uint32_t pmusleepi[8];  /**< @0x10000120: Sleep Program Instruction Registers */

       union {
         IO__ uint32_t pmuie;  /**< @0x10000140: PMU Interrupt Enables Register */

         struct {
                uint32_t : 1;
           IO__ uint32_t rtc : 1;  /**< [1..1] RTC Comparator active */
           IO__ uint32_t dwakeup : 1;  /**< [2..2] dwakeup_n pin active */
                uint32_t : 29;
         } pmuie_bits;
       };

       union {
         IO__ uint32_t pmucause;  /**< @0x10000144: PMU Wakeup Cause Register */

         struct {
           I__  uint32_t wakeupcause : 2;  /**< [1..0] Wakeup cause */
                uint32_t : 6;
           I__  uint32_t resetcause : 2;  /**< [9..8] Reset cause */
                uint32_t : 22;
         } pmucause_bits;
       };
  IO__ uint32_t pmusleep;  /**< @0x10000148: Initiate Sleep Sequence Register */
  IO__ uint32_t pmukey;  /**< @0x1000014C: PMU Key Register */
       uint32_t reserved9[8108];
} sifive_fe310_aon_t; // 0x10007FFF

// ----------------------------------------------------------------------------

/**
 * @brief Power, Reset, Clock, Interrupt (PRCI) Peripheral.
 */

typedef struct {

       union {
         IO__ uint32_t hfrosccfg;  /**< @0x10008000: Internal Trimmable Programmable 72 MHz Oscillator Register */

         struct {
           IO__ uint32_t div : 6;  /**< [5..0] HFROSC divider */
                uint32_t : 10;
           IO__ uint32_t trim : 5;  /**< [20..16] HFROSC trim value */
                uint32_t : 9;
           IO__ uint32_t en : 1;  /**< [30..30] HFROSC enable */
           I__  uint32_t rdy : 1;  /**< [31..31] HFROSC ready */
         } hfrosccfg_bits;
       };

       union {
         IO__ uint32_t hfxosccfg;  /**< @0x10008004: External 16 MHz Crystal Oscillator Register */

         struct {
                uint32_t : 30;
           IO__ uint32_t en : 1;  /**< [30..30] HFXOSC enable */
           I__  uint32_t rdy : 1;  /**< [31..31] HFXOSC ready */
         } hfxosccfg_bits;
       };

       union {
         IO__ uint32_t pllcfg;  /**< @0x10008008: Internal High-Frequency PLL (HFPLL) Register */

         struct {
           IO__ uint32_t r : 3;  /**< [2..0] PLL R input divider value */
                uint32_t : 1;
           IO__ uint32_t f : 6;  /**< [9..4] PLL F multiplier value */
           IO__ uint32_t q : 2;  /**< [11..10] PLL Q output divider value */
                uint32_t : 4;
           IO__ uint32_t sel : 1;  /**< [16..16] PLL select */
           IO__ uint32_t refsel : 1;  /**< [17..17] PLL reference select */
           IO__ uint32_t bypass : 1;  /**< [18..18] PLL bypass */
                uint32_t : 12;
           I__  uint32_t lock : 1;  /**< [31..31] PLL lock indicator */
         } pllcfg_bits;
       };
  IO__ uint32_t plloutdiv;  /**< @0x1000800C: PLL Output Divider */
       uint32_t reserved1[8188];
} sifive_fe310_prci_t; // 0x1000FFFF

// ----------------------------------------------------------------------------

/**
 * @brief One-Time Programmable Memory (OTP) Peripheral.
 */

typedef struct {
  IO__ uint32_t lock;  /**< @0x10010000: Programmed-I/O Lock Register */
  IO__ uint32_t ck;  /**< @0x10010004: Device Clock Signal Register */
  IO__ uint32_t oe;  /**< @0x10010008: Device Output-Enable Signal Register */
  IO__ uint32_t sel;  /**< @0x1001000C: Device Chip-Select Signal Register */
  IO__ uint32_t we;  /**< @0x10010010: Device Write-Enable Signal Register */
  IO__ uint32_t mr;  /**< @0x10010014: Device Mode Register */
  IO__ uint32_t mrr;  /**< @0x10010018: Read-Voltage Regulator Control Register */
  IO__ uint32_t mpp;  /**< @0x1001001C: Write-Voltage Charge Pump Control Register */
  IO__ uint32_t vrren;  /**< @0x10010020: Read-Voltage Enable Register */
  IO__ uint32_t vppen;  /**< @0x10010024: Write-Voltage Enable Register */
  IO__ uint32_t a;  /**< @0x10010028: Device Address Register */
  IO__ uint32_t d;  /**< @0x1001002C: Device Data Input Register */
  IO__ uint32_t q;  /**< @0x10010030: Device Data Output Register */

       union {
         IO__ uint32_t rsctrl;  /**< @0x10010034: Read Sequencer Control Register */

         struct {
           IO__ uint32_t scale : 2;  /**< [1..0] OTP timescale */
                uint32_t : 1;
           IO__ uint32_t tas : 1;  /**< [3..3] Address setup time */
           IO__ uint32_t trp : 1;  /**< [4..4] Read pulse time */
           IO__ uint32_t tracc : 1;  /**< [5..5] Read access time */
                uint32_t : 26;
         } rsctrl_bits;
       };
       uint32_t reserved1[1010];
} sifive_fe310_otp_t; // 0x10010FFF

// ----------------------------------------------------------------------------

/**
 * @brief General Purpose Input/Output Controller (GPIO) Peripheral.
 */

typedef struct {
  IO__ uint32_t value;  /**< @0x10012000: Pin Value Register */
  IO__ uint32_t inputen;  /**< @0x10012004: Pin Input Enable Register */
  IO__ uint32_t outputen;  /**< @0x10012008: Pin Output Enable Register */
  IO__ uint32_t port;  /**< @0x1001200C: Output Port Value Register */
  IO__ uint32_t pue;  /**< @0x10012010: Internal Pull-up Enable Register */
  IO__ uint32_t ds;  /**< @0x10012014: Pin Drive Strength Register */
  IO__ uint32_t riseie;  /**< @0x10012018: Rise Interrupt Enable Register */
  IO__ uint32_t riseip;  /**< @0x1001201C: Rise Interrupt Pending Register */
  IO__ uint32_t fallie;  /**< @0x10012020: Fall Interrupt Enable Register */
  IO__ uint32_t fallip;  /**< @0x10012024: Fall Interrupt Pending Register */
  IO__ uint32_t highie;  /**< @0x10012028: High Interrupt Enable Register */
  IO__ uint32_t highip;  /**< @0x1001202C: High Interrupt Pending Register */
  IO__ uint32_t lowie;  /**< @0x10012030: Low Interrupt Enable Register */
  IO__ uint32_t lowip;  /**< @0x10012034: Low Interrupt Pending Register */
  IO__ uint32_t iofen;  /**< @0x10012038: HW I/O Function Enable Register */
  IO__ uint32_t iofsel;  /**< @0x1001203C: HW I/O Function Select Register */
  IO__ uint32_t outxor;  /**< @0x10012040: Output XOR (invert) Register */
       uint32_t reserved1[1007];
} sifive_fe310_gpio_t; // 0x10012FFF

// ----------------------------------------------------------------------------

/**
 * @brief Universal Asynchronous Receiver/Transmitter (UART) Peripheral.
 */

typedef struct {

       union {
         IO__ uint32_t txdata;  /**< @0x10013000: Transmit Data Register */

         struct {
           IO__ uint32_t data : 8;  /**< [7..0] Transmit data */
                uint32_t : 23;
           IO__ uint32_t full : 1;  /**< [31..31] Transmit FIFO full */
         } txdata_bits;
       };

       union {
         IO__ uint32_t rxdata;  /**< @0x10013004: Receive Data Register */

         struct {
           I__  uint32_t data : 8;  /**< [7..0] Received data */
                uint32_t : 23;
           IO__ uint32_t empty : 1;  /**< [31..31] Receive FIFO empty */
         } rxdata_bits;
       };

       union {
         IO__ uint32_t txctrl;  /**< @0x10013008: Transmit Control Register  */

         struct {
           IO__ uint32_t txen : 1;  /**< [0..0] Transmit enable */
           IO__ uint32_t nstop : 1;  /**< [1..1] Number of stop bits */
                uint32_t : 14;
           IO__ uint32_t txcnt : 3;  /**< [18..16] Transmit watermark level */
                uint32_t : 13;
         } txctrl_bits;
       };

       union {
         IO__ uint32_t rxctrl;  /**< @0x1001300C: Receive Control Register */

         struct {
           IO__ uint32_t rxen : 1;  /**< [0..0] Receive enable */
                uint32_t : 15;
           IO__ uint32_t rxcnt : 3;  /**< [18..16] Receive watermark level */
                uint32_t : 13;
         } rxctrl_bits;
       };

       union {
         IO__ uint32_t ie;  /**< @0x10013010: Interrupt Enable Register */

         struct {
           IO__ uint32_t txwm : 1;  /**< [0..0] Transmit watermark interrupt enable */
           IO__ uint32_t rxwm : 1;  /**< [1..1] Receive watermark interrupt enable */
                uint32_t : 30;
         } ie_bits;
       };

       union {
         I__  uint32_t ip;  /**< @0x10013014: Interrupt Pending Register */

         struct {
           I__  uint32_t txwm : 1;  /**< [0..0] Transmit watermark interrupt pending */
           I__  uint32_t rxwm : 1;  /**< [1..1] Receive watermark interrupt pending */
                uint32_t : 30;
         } ip_bits;
       };

       union {
         IO__ uint32_t div;  /**< @0x10013018: Baud Rate Divisor Register */

         struct {
           IO__ uint32_t value : 16;  /**< [15..0] Baud rate divisor */
                uint32_t : 16;
         } div_bits;
       };
       uint32_t reserved1[1017];
} sifive_fe310_uart_t; // 0x10013FFF

// ----------------------------------------------------------------------------

/**
 * @brief Serial Peripheral Interface (SPI) Peripheral.
 */

typedef struct {

       union {
         IO__ uint32_t sckdiv;  /**< @0x10014000: Serial clock divisor Register */

         struct {
           IO__ uint32_t scale : 12;  /**< [11..0] Divisor for serial clock */
                uint32_t : 20;
         } sckdiv_bits;
       };

       union {
         IO__ uint32_t sckmode;  /**< @0x10014004: Serial Clock Mode Register */

         struct {
           IO__ uint32_t pha : 1;  /**< [0..0] Serial clock phase */
           IO__ uint32_t pol : 1;  /**< [1..1] Serial clock polarity */
                uint32_t : 30;
         } sckmode_bits;
       };
       uint32_t reserved1[2];
  IO__ uint32_t csid;  /**< @0x10014010: Chip Select ID Register */
  IO__ uint32_t csdef;  /**< @0x10014014: Chip Select Default Register */

       union {
         IO__ uint32_t csmode;  /**< @0x10014018: Chip Select Mode Register */

         struct {
           IO__ uint32_t mode : 2;  /**< [1..0] Chip select mode */
                uint32_t : 30;
         } csmode_bits;
       };
       uint32_t reserved2[3];

       union {
         IO__ uint32_t delay0;  /**< @0x10014028: Delay Control 0 Register */

         struct {
           IO__ uint32_t cssck : 8;  /**< [7..0] CS to SCK Delay */
                uint32_t : 8;
           IO__ uint32_t sckcs : 8;  /**< [23..16] SCK to CS Delay */
                uint32_t : 8;
         } delay0_bits;
       };

       union {
         IO__ uint32_t delay1;  /**< @0x1001402C: Delay Control 1 Register */

         struct {
           IO__ uint32_t intercs : 8;  /**< [7..0] Minimum CS inactive time */
                uint32_t : 8;
           IO__ uint32_t interxfr : 8;  /**< [23..16] Maximum interframe delay */
                uint32_t : 8;
         } delay1_bits;
       };
       uint32_t reserved3[4];

       union {
         IO__ uint32_t fmt;  /**< @0x10014040: Frame Format Register */

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
         IO__ uint32_t txdata;  /**< @0x10014048: Tx FIFO Data Register */

         struct {
           IO__ uint32_t data : 8;  /**< [7..0] Transmit data */
                uint32_t : 23;
           I__  uint32_t full : 1;  /**< [31..31] FIFO full flag */
         } txdata_bits;
       };

       union {
         I__  uint32_t rxdata;  /**< @0x1001404C: Rx FIFO Data Register */

         struct {
           I__  uint32_t data : 8;  /**< [7..0] Received data */
                uint32_t : 23;
           I__  uint32_t empty : 1;  /**< [31..31] FIFO empty flag */
         } rxdata_bits;
       };

       union {
         IO__ uint32_t txmark;  /**< @0x10014050: Tx FIFO Watermark Register */

         struct {
           IO__ uint32_t value : 3;  /**< [2..0] Transmit watermark */
                uint32_t : 29;
         } txmark_bits;
       };

       union {
         IO__ uint32_t rxmark;  /**< @0x10014054: Rx FIFO Watermark Register */

         struct {
           IO__ uint32_t value : 3;  /**< [2..0] Receive watermark */
                uint32_t : 29;
         } rxmark_bits;
       };
       uint32_t reserved5[2];

       union {
         IO__ uint32_t fctrl;  /**< @0x10014060: Flash Interface Control Register */

         struct {
           IO__ uint32_t en : 1;  /**< [0..0] SPI Flash Mode Select */
                uint32_t : 31;
         } fctrl_bits;
       };

       union {
         IO__ uint32_t ffmt;  /**< @0x10014064: Flash Instruction Format Register */

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
         IO__ uint32_t ie;  /**< @0x10014070: Interrupt Enable Register */

         struct {
           I__  uint32_t txwm : 1;  /**< [0..0] Transmit watermark enable */
           I__  uint32_t rxwm : 1;  /**< [1..1] Receive watermark enable */
                uint32_t : 30;
         } ie_bits;
       };

       union {
         IO__ uint32_t ip;  /**< @0x10014074: Interrupt Pending Register */

         struct {
           I__  uint32_t txwm : 1;  /**< [0..0] Transmit watermark pending */
           I__  uint32_t rxwm : 1;  /**< [1..1] Receive watermark pending */
                uint32_t : 30;
         } ip_bits;
       };
       uint32_t reserved7[994];
} sifive_fe310_qspi_t; // 0x10014FFF

// ----------------------------------------------------------------------------

/**
 * @brief Pulse-Width Modulation (PWM) Peripheral.
 */

typedef struct {

       union {
         IO__ uint32_t cfg;  /**< @0x10015000: Configuration Register */

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
  IO__ uint32_t count;  /**< @0x10015008: Configuration Register */
       uint32_t reserved2;

       union {
         IO__ uint32_t scale;  /**< @0x10015010: Scale Register */

         struct {
           IO__ uint32_t value : 8;  /**< [7..0] Compare value */
                uint32_t : 24;
         } scale_bits;
       };
       uint32_t reserved3[3];

       union {
         IO__ uint32_t cmp[4];  /**< @0x10015020: Compare Registers */

         struct {
           IO__ uint32_t value : 8;  /**< [7..0] Compare value */
                uint32_t : 24;
         } cmp_bits[4];
       };
       uint32_t reserved4[1012];
} sifive_fe310_pwm0_t; // 0x10015FFF

// ----------------------------------------------------------------------------

/**
 * @brief Pulse-Width Modulation (PWM) Peripheral.
 */

typedef struct {

       union {
         IO__ uint32_t cfg;  /**< @0x10025000: Configuration Register */

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
  IO__ uint32_t count;  /**< @0x10025008: Configuration Register */
       uint32_t reserved2;

       union {
         IO__ uint32_t scale;  /**< @0x10025010: Scale Register */

         struct {
           IO__ uint32_t value : 16;  /**< [15..0] Compare value */
                uint32_t : 16;
         } scale_bits;
       };
       uint32_t reserved3[3];

       union {
         IO__ uint32_t cmp[4];  /**< @0x10025020: Compare Registers */

         struct {
           IO__ uint32_t value : 16;  /**< [15..0] Compare value */
                uint32_t : 16;
         } cmp_bits[4];
       };
       uint32_t reserved4[1012];
} sifive_fe310_pwm_t; // 0x10025FFF

// ----------------------------------------------------------------------------

/**
 * @brief Wakeup Cause Values Enumeration.
 */

typedef enum {
  sifive_fe310_aon_pmucause_wakeupcause_reset = 0, /**< Reset Wakeup */
  sifive_fe310_aon_pmucause_wakeupcause_rtc = 1, /**< RTC Wakeup */
  sifive_fe310_aon_pmucause_wakeupcause_dwakeup = 2, /**< Digital input Wakeup */
} sifive_fe310_aon_pmucause_wakeupcause_enum_t;

// ----------------------------------------------------------------------------

/**
 * @brief Reset Cause Values Enumeration.
 */

typedef enum {
  sifive_fe310_aon_pmucause_resetcause_external = 1, /**< External reset */
  sifive_fe310_aon_pmucause_resetcause_watchdog = 2, /**< Watchdog timer reset */
} sifive_fe310_aon_pmucause_resetcause_enum_t;

// ----------------------------------------------------------------------------

/**
 * @brief Reference Clock R Divide Ratio Enumeration.
 */

typedef enum {
  sifive_fe310_prci_pllcfg_r_div1 = 0, /**< Unchanged */
  sifive_fe310_prci_pllcfg_r_div2 = 1, /**< Divided by 2 */
  sifive_fe310_prci_pllcfg_r_div3 = 2, /**< Divided by 3 */
  sifive_fe310_prci_pllcfg_r_div4 = 3, /**< Divided by 4 */
} sifive_fe310_prci_pllcfg_r_enum_t;

// ----------------------------------------------------------------------------

/**
 * @brief Reference Clock Q Divide Ratio Enumeration.
 */

typedef enum {
  sifive_fe310_prci_pllcfg_q_div2 = 1, /**< Divided by 2 */
  sifive_fe310_prci_pllcfg_q_div3 = 2, /**< Divided by 3 */
  sifive_fe310_prci_pllcfg_q_div4 = 3, /**< Divided by 4 */
} sifive_fe310_prci_pllcfg_q_enum_t;

// ----------------------------------------------------------------------------

/**
 * @brief Chip Select Modes Enumeration.
 */

typedef enum {
  sifive_fe310_qspi_csmode_mode_auto = 0, /**< Assert/de-assert CS at the beginning/end of each frame */
  sifive_fe310_qspi_csmode_mode_hold = 2, /**< Keep CS continuously asserted after the initial frame */
  sifive_fe310_qspi_csmode_mode_off = 3, /**< Disable hardware control of the CS pin */
} sifive_fe310_qspi_csmode_mode_enum_t;

// ----------------------------------------------------------------------------

/**
 * @brief SPI Protocol Enumeration.
 */

typedef enum {
  sifive_fe310_qspi_fmt_proto_single = 0, /**< DQ0 (MOSI), DQ1 (MISO) */
  sifive_fe310_qspi_fmt_proto_dual = 1, /**< DQ0, DQ1 */
  sifive_fe310_qspi_fmt_proto_quad = 2, /**< DQ0, DQ1, DQ2, DQ3 */
} sifive_fe310_qspi_fmt_proto_enum_t;

// ----------------------------------------------------------------------------

/**
 * @brief SPI Endianness Enumeration.
 */

typedef enum {
  sifive_fe310_qspi_fmt_endian_msb = 0, /**< Transmit most-significant bit (MSB) first */
  sifive_fe310_qspi_fmt_endian_lsb = 1, /**< Transmit least-significant bit (LSB) first */
} sifive_fe310_qspi_fmt_endian_enum_t;

// ----------------------------------------------------------------------------

/**
 * @brief SPI I/O Direction Enumeration.
 */

typedef enum {
  sifive_fe310_qspi_fmt_dir_rx = 0, /**< For dual and quad protocols, the DQ pins are tri-stated. For the single protocol, the DQ0 pin is driven with the transmit data as normal. */
  sifive_fe310_qspi_fmt_dir_tx = 1, /**< The receive FIFO is not populated. */
} sifive_fe310_qspi_fmt_dir_enum_t;

// ----------------------------------------------------------------------------
// Struct 'sifive_fe310_plic_target0_m_t' positions & masks.

// Register 'plic.target0.m.threshold'.
#define SIFIVE_FE310_PLIC_TARGET0_M_THRESHOLD_VALUE_POSITION  (0ul)
#define SIFIVE_FE310_PLIC_TARGET0_M_THRESHOLD_VALUE_MASK  (0x7ul << 0ul)  /**< [2..0] The priority threshold value */

// ----------------------------------------------------------------------------
// Struct 'sifive_fe310_plic_t' positions & masks.

// Register 'plic.priorities'.
#define SIFIVE_FE310_PLIC_PRIORITIES_VALUE_POSITION  (0ul)
#define SIFIVE_FE310_PLIC_PRIORITIES_VALUE_MASK  (0x7ul << 0ul)  /**< [2..0] The priority for a given global interrupt */

// ----------------------------------------------------------------------------
// Struct 'sifive_fe310_aon_t' positions & masks.

// Register 'aon.wdogcfg'.
#define SIFIVE_FE310_AON_WDOGCFG_SCALE_POSITION  (0ul)
#define SIFIVE_FE310_AON_WDOGCFG_SCALE_MASK  (0xFul << 0ul)  /**< [3..0] Watchdog counter scale */
#define SIFIVE_FE310_AON_WDOGCFG_RSTEN_POSITION  (8ul)
#define SIFIVE_FE310_AON_WDOGCFG_RSTEN_MASK  (0x1ul << 8ul)  /**< [8..8] Watchdog full reset enable */
#define SIFIVE_FE310_AON_WDOGCFG_RSTEN  (1ul << 8ul)
#define SIFIVE_FE310_AON_WDOGCFG_ZEROCMP_POSITION  (9ul)
#define SIFIVE_FE310_AON_WDOGCFG_ZEROCMP_MASK  (0x1ul << 9ul)  /**< [9..9] Watchdog zero on comparator */
#define SIFIVE_FE310_AON_WDOGCFG_ZEROCMP  (1ul << 9ul)
#define SIFIVE_FE310_AON_WDOGCFG_ENALWAYS_POSITION  (12ul)
#define SIFIVE_FE310_AON_WDOGCFG_ENALWAYS_MASK  (0x1ul << 12ul)  /**< [12..12] Watchdog enable counter always */
#define SIFIVE_FE310_AON_WDOGCFG_ENALWAYS  (1ul << 12ul)
#define SIFIVE_FE310_AON_WDOGCFG_ENCOREAWAKE_POSITION  (13ul)
#define SIFIVE_FE310_AON_WDOGCFG_ENCOREAWAKE_MASK  (0x1ul << 13ul)  /**< [13..13] Watchdog counter only when awake */
#define SIFIVE_FE310_AON_WDOGCFG_ENCOREAWAKE  (1ul << 13ul)
#define SIFIVE_FE310_AON_WDOGCFG_CMPIP_POSITION  (28ul)
#define SIFIVE_FE310_AON_WDOGCFG_CMPIP_MASK  (0x1ul << 28ul)  /**< [28..28] Watchdog interrupt pending */
#define SIFIVE_FE310_AON_WDOGCFG_CMPIP  (1ul << 28ul)

// Register 'aon.wdogs'.
#define SIFIVE_FE310_AON_WDOGS_SCALE_POSITION  (0ul)
#define SIFIVE_FE310_AON_WDOGS_SCALE_MASK  (0xFFFFul << 0ul)  /**< [15..0] Watchdog scale value */

// Register 'aon.wdogcmp'.
#define SIFIVE_FE310_AON_WDOGCMP_CMP_POSITION  (0ul)
#define SIFIVE_FE310_AON_WDOGCMP_CMP_MASK  (0xFFFFul << 0ul)  /**< [15..0] Watchdog compare value */

// Register 'aon.rtccfg'.
#define SIFIVE_FE310_AON_RTCCFG_SCALE_POSITION  (0ul)
#define SIFIVE_FE310_AON_RTCCFG_SCALE_MASK  (0xFul << 0ul)  /**< [3..0] RTC clock rate scale */
#define SIFIVE_FE310_AON_RTCCFG_ENALWAYS_POSITION  (12ul)
#define SIFIVE_FE310_AON_RTCCFG_ENALWAYS_MASK  (0x1ul << 12ul)  /**< [12..12] RTC counter enable */
#define SIFIVE_FE310_AON_RTCCFG_ENALWAYS  (1ul << 12ul)
#define SIFIVE_FE310_AON_RTCCFG_CMPIP_POSITION  (28ul)
#define SIFIVE_FE310_AON_RTCCFG_CMPIP_MASK  (0x1ul << 28ul)  /**< [28..28] RTC comparator interrupt pending */
#define SIFIVE_FE310_AON_RTCCFG_CMPIP  (1ul << 28ul)

// Register 'aon.rtchi'.
#define SIFIVE_FE310_AON_RTCHI_HIGH_POSITION  (0ul)
#define SIFIVE_FE310_AON_RTCHI_HIGH_MASK  (0xFFFFul << 0ul)  /**< [15..0] RTC counter register, high bits */

// Register 'aon.lfrosccfg'.
#define SIFIVE_FE310_AON_LFROSCCFG_DIV_POSITION  (0ul)
#define SIFIVE_FE310_AON_LFROSCCFG_DIV_MASK  (0x3Ful << 0ul)  /**< [5..0] LFROSC divider */
#define SIFIVE_FE310_AON_LFROSCCFG_TRIM_POSITION  (16ul)
#define SIFIVE_FE310_AON_LFROSCCFG_TRIM_MASK  (0x1Ful << 16ul)  /**< [20..16] LFROSC trim value */
#define SIFIVE_FE310_AON_LFROSCCFG_EN_POSITION  (30ul)
#define SIFIVE_FE310_AON_LFROSCCFG_EN_MASK  (0x1ul << 30ul)  /**< [30..30] LFROSC enable */
#define SIFIVE_FE310_AON_LFROSCCFG_EN  (1ul << 30ul)
#define SIFIVE_FE310_AON_LFROSCCFG_RDY_POSITION  (31ul)
#define SIFIVE_FE310_AON_LFROSCCFG_RDY_MASK  (0x1ul << 31ul)  /**< [31..31] LFROSC ready */
#define SIFIVE_FE310_AON_LFROSCCFG_RDY  (1ul << 31ul)

// Register 'aon.pmuie'.
#define SIFIVE_FE310_AON_PMUIE_RTC_POSITION  (1ul)
#define SIFIVE_FE310_AON_PMUIE_RTC_MASK  (0x1ul << 1ul)  /**< [1..1] RTC Comparator active */
#define SIFIVE_FE310_AON_PMUIE_RTC  (1ul << 1ul)
#define SIFIVE_FE310_AON_PMUIE_DWAKEUP_POSITION  (2ul)
#define SIFIVE_FE310_AON_PMUIE_DWAKEUP_MASK  (0x1ul << 2ul)  /**< [2..2] dwakeup_n pin active */
#define SIFIVE_FE310_AON_PMUIE_DWAKEUP  (1ul << 2ul)

// Register 'aon.pmucause'.
#define SIFIVE_FE310_AON_PMUCAUSE_WAKEUPCAUSE_POSITION  (0ul)
#define SIFIVE_FE310_AON_PMUCAUSE_WAKEUPCAUSE_MASK  (0x3ul << 0ul)  /**< [1..0] Wakeup cause */
#define SIFIVE_FE310_AON_PMUCAUSE_WAKEUPCAUSE_RESET  (0ul << 0ul)  /**< Reset Wakeup */
#define SIFIVE_FE310_AON_PMUCAUSE_WAKEUPCAUSE_RTC  (1ul << 0ul)  /**< RTC Wakeup */
#define SIFIVE_FE310_AON_PMUCAUSE_WAKEUPCAUSE_DWAKEUP  (2ul << 0ul)  /**< Digital input Wakeup */
#define SIFIVE_FE310_AON_PMUCAUSE_RESETCAUSE_POSITION  (8ul)
#define SIFIVE_FE310_AON_PMUCAUSE_RESETCAUSE_MASK  (0x3ul << 8ul)  /**< [9..8] Reset cause */
#define SIFIVE_FE310_AON_PMUCAUSE_RESETCAUSE_EXTERNAL  (1ul << 8ul)  /**< External reset */
#define SIFIVE_FE310_AON_PMUCAUSE_RESETCAUSE_WATCHDOG  (2ul << 8ul)  /**< Watchdog timer reset */

// ----------------------------------------------------------------------------
// Struct 'sifive_fe310_prci_t' positions & masks.

// Register 'prci.hfrosccfg'.
#define SIFIVE_FE310_PRCI_HFROSCCFG_DIV_POSITION  (0ul)
#define SIFIVE_FE310_PRCI_HFROSCCFG_DIV_MASK  (0x3Ful << 0ul)  /**< [5..0] HFROSC divider */
#define SIFIVE_FE310_PRCI_HFROSCCFG_TRIM_POSITION  (16ul)
#define SIFIVE_FE310_PRCI_HFROSCCFG_TRIM_MASK  (0x1Ful << 16ul)  /**< [20..16] HFROSC trim value */
#define SIFIVE_FE310_PRCI_HFROSCCFG_EN_POSITION  (30ul)
#define SIFIVE_FE310_PRCI_HFROSCCFG_EN_MASK  (0x1ul << 30ul)  /**< [30..30] HFROSC enable */
#define SIFIVE_FE310_PRCI_HFROSCCFG_EN  (1ul << 30ul)
#define SIFIVE_FE310_PRCI_HFROSCCFG_RDY_POSITION  (31ul)
#define SIFIVE_FE310_PRCI_HFROSCCFG_RDY_MASK  (0x1ul << 31ul)  /**< [31..31] HFROSC ready */
#define SIFIVE_FE310_PRCI_HFROSCCFG_RDY  (1ul << 31ul)

// Register 'prci.hfxosccfg'.
#define SIFIVE_FE310_PRCI_HFXOSCCFG_EN_POSITION  (30ul)
#define SIFIVE_FE310_PRCI_HFXOSCCFG_EN_MASK  (0x1ul << 30ul)  /**< [30..30] HFXOSC enable */
#define SIFIVE_FE310_PRCI_HFXOSCCFG_EN  (1ul << 30ul)
#define SIFIVE_FE310_PRCI_HFXOSCCFG_RDY_POSITION  (31ul)
#define SIFIVE_FE310_PRCI_HFXOSCCFG_RDY_MASK  (0x1ul << 31ul)  /**< [31..31] HFXOSC ready */
#define SIFIVE_FE310_PRCI_HFXOSCCFG_RDY  (1ul << 31ul)

// Register 'prci.pllcfg'.
#define SIFIVE_FE310_PRCI_PLLCFG_R_POSITION  (0ul)
#define SIFIVE_FE310_PRCI_PLLCFG_R_MASK  (0x7ul << 0ul)  /**< [2..0] PLL R input divider value */
#define SIFIVE_FE310_PRCI_PLLCFG_R_DIV1  (0ul << 0ul)  /**< Unchanged */
#define SIFIVE_FE310_PRCI_PLLCFG_R_DIV2  (1ul << 0ul)  /**< Divided by 2 */
#define SIFIVE_FE310_PRCI_PLLCFG_R_DIV3  (2ul << 0ul)  /**< Divided by 3 */
#define SIFIVE_FE310_PRCI_PLLCFG_R_DIV4  (3ul << 0ul)  /**< Divided by 4 */
#define SIFIVE_FE310_PRCI_PLLCFG_F_POSITION  (4ul)
#define SIFIVE_FE310_PRCI_PLLCFG_F_MASK  (0x3Ful << 4ul)  /**< [9..4] PLL F multiplier value */
#define SIFIVE_FE310_PRCI_PLLCFG_Q_POSITION  (10ul)
#define SIFIVE_FE310_PRCI_PLLCFG_Q_MASK  (0x3ul << 10ul)  /**< [11..10] PLL Q output divider value */
#define SIFIVE_FE310_PRCI_PLLCFG_Q_DIV2  (1ul << 10ul)  /**< Divided by 2 */
#define SIFIVE_FE310_PRCI_PLLCFG_Q_DIV3  (2ul << 10ul)  /**< Divided by 3 */
#define SIFIVE_FE310_PRCI_PLLCFG_Q_DIV4  (3ul << 10ul)  /**< Divided by 4 */
#define SIFIVE_FE310_PRCI_PLLCFG_SEL_POSITION  (16ul)
#define SIFIVE_FE310_PRCI_PLLCFG_SEL_MASK  (0x1ul << 16ul)  /**< [16..16] PLL select */
#define SIFIVE_FE310_PRCI_PLLCFG_SEL  (1ul << 16ul)
#define SIFIVE_FE310_PRCI_PLLCFG_REFSEL_POSITION  (17ul)
#define SIFIVE_FE310_PRCI_PLLCFG_REFSEL_MASK  (0x1ul << 17ul)  /**< [17..17] PLL reference select */
#define SIFIVE_FE310_PRCI_PLLCFG_REFSEL  (1ul << 17ul)
#define SIFIVE_FE310_PRCI_PLLCFG_BYPASS_POSITION  (18ul)
#define SIFIVE_FE310_PRCI_PLLCFG_BYPASS_MASK  (0x1ul << 18ul)  /**< [18..18] PLL bypass */
#define SIFIVE_FE310_PRCI_PLLCFG_BYPASS  (1ul << 18ul)
#define SIFIVE_FE310_PRCI_PLLCFG_LOCK_POSITION  (31ul)
#define SIFIVE_FE310_PRCI_PLLCFG_LOCK_MASK  (0x1ul << 31ul)  /**< [31..31] PLL lock indicator */
#define SIFIVE_FE310_PRCI_PLLCFG_LOCK  (1ul << 31ul)

// ----------------------------------------------------------------------------
// Struct 'sifive_fe310_otp_t' positions & masks.

// Register 'otp.rsctrl'.
#define SIFIVE_FE310_OTP_RSCTRL_SCALE_POSITION  (0ul)
#define SIFIVE_FE310_OTP_RSCTRL_SCALE_MASK  (0x3ul << 0ul)  /**< [1..0] OTP timescale */
#define SIFIVE_FE310_OTP_RSCTRL_TAS_POSITION  (3ul)
#define SIFIVE_FE310_OTP_RSCTRL_TAS_MASK  (0x1ul << 3ul)  /**< [3..3] Address setup time */
#define SIFIVE_FE310_OTP_RSCTRL_TAS  (1ul << 3ul)
#define SIFIVE_FE310_OTP_RSCTRL_TRP_POSITION  (4ul)
#define SIFIVE_FE310_OTP_RSCTRL_TRP_MASK  (0x1ul << 4ul)  /**< [4..4] Read pulse time */
#define SIFIVE_FE310_OTP_RSCTRL_TRP  (1ul << 4ul)
#define SIFIVE_FE310_OTP_RSCTRL_TRACC_POSITION  (5ul)
#define SIFIVE_FE310_OTP_RSCTRL_TRACC_MASK  (0x1ul << 5ul)  /**< [5..5] Read access time */
#define SIFIVE_FE310_OTP_RSCTRL_TRACC  (1ul << 5ul)

// ----------------------------------------------------------------------------
// Struct 'sifive_fe310_uart_t' positions & masks.

// Register 'uart.txdata'.
#define SIFIVE_FE310_UART_TXDATA_DATA_POSITION  (0ul)
#define SIFIVE_FE310_UART_TXDATA_DATA_MASK  (0xFFul << 0ul)  /**< [7..0] Transmit data */
#define SIFIVE_FE310_UART_TXDATA_FULL_POSITION  (31ul)
#define SIFIVE_FE310_UART_TXDATA_FULL_MASK  (0x1ul << 31ul)  /**< [31..31] Transmit FIFO full */
#define SIFIVE_FE310_UART_TXDATA_FULL  (1ul << 31ul)

// Register 'uart.rxdata'.
#define SIFIVE_FE310_UART_RXDATA_DATA_POSITION  (0ul)
#define SIFIVE_FE310_UART_RXDATA_DATA_MASK  (0xFFul << 0ul)  /**< [7..0] Received data */
#define SIFIVE_FE310_UART_RXDATA_EMPTY_POSITION  (31ul)
#define SIFIVE_FE310_UART_RXDATA_EMPTY_MASK  (0x1ul << 31ul)  /**< [31..31] Receive FIFO empty */
#define SIFIVE_FE310_UART_RXDATA_EMPTY  (1ul << 31ul)

// Register 'uart.txctrl'.
#define SIFIVE_FE310_UART_TXCTRL_TXEN_POSITION  (0ul)
#define SIFIVE_FE310_UART_TXCTRL_TXEN_MASK  (0x1ul << 0ul)  /**< [0..0] Transmit enable */
#define SIFIVE_FE310_UART_TXCTRL_TXEN  (1ul << 0ul)
#define SIFIVE_FE310_UART_TXCTRL_NSTOP_POSITION  (1ul)
#define SIFIVE_FE310_UART_TXCTRL_NSTOP_MASK  (0x1ul << 1ul)  /**< [1..1] Number of stop bits */
#define SIFIVE_FE310_UART_TXCTRL_NSTOP  (1ul << 1ul)
#define SIFIVE_FE310_UART_TXCTRL_TXCNT_POSITION  (16ul)
#define SIFIVE_FE310_UART_TXCTRL_TXCNT_MASK  (0x7ul << 16ul)  /**< [18..16] Transmit watermark level */

// Register 'uart.rxctrl'.
#define SIFIVE_FE310_UART_RXCTRL_RXEN_POSITION  (0ul)
#define SIFIVE_FE310_UART_RXCTRL_RXEN_MASK  (0x1ul << 0ul)  /**< [0..0] Receive enable */
#define SIFIVE_FE310_UART_RXCTRL_RXEN  (1ul << 0ul)
#define SIFIVE_FE310_UART_RXCTRL_RXCNT_POSITION  (16ul)
#define SIFIVE_FE310_UART_RXCTRL_RXCNT_MASK  (0x7ul << 16ul)  /**< [18..16] Receive watermark level */

// Register 'uart.ie'.
#define SIFIVE_FE310_UART_IE_TXWM_POSITION  (0ul)
#define SIFIVE_FE310_UART_IE_TXWM_MASK  (0x1ul << 0ul)  /**< [0..0] Transmit watermark interrupt enable */
#define SIFIVE_FE310_UART_IE_TXWM  (1ul << 0ul)
#define SIFIVE_FE310_UART_IE_RXWM_POSITION  (1ul)
#define SIFIVE_FE310_UART_IE_RXWM_MASK  (0x1ul << 1ul)  /**< [1..1] Receive watermark interrupt enable */
#define SIFIVE_FE310_UART_IE_RXWM  (1ul << 1ul)

// Register 'uart.ip'.
#define SIFIVE_FE310_UART_IP_TXWM_POSITION  (0ul)
#define SIFIVE_FE310_UART_IP_TXWM_MASK  (0x1ul << 0ul)  /**< [0..0] Transmit watermark interrupt pending */
#define SIFIVE_FE310_UART_IP_TXWM  (1ul << 0ul)
#define SIFIVE_FE310_UART_IP_RXWM_POSITION  (1ul)
#define SIFIVE_FE310_UART_IP_RXWM_MASK  (0x1ul << 1ul)  /**< [1..1] Receive watermark interrupt pending */
#define SIFIVE_FE310_UART_IP_RXWM  (1ul << 1ul)

// Register 'uart.div'.
#define SIFIVE_FE310_UART_DIV_VALUE_POSITION  (0ul)
#define SIFIVE_FE310_UART_DIV_VALUE_MASK  (0xFFFFul << 0ul)  /**< [15..0] Baud rate divisor */

// ----------------------------------------------------------------------------
// Struct 'sifive_fe310_qspi_t' positions & masks.

// Register 'qspi.sckdiv'.
#define SIFIVE_FE310_QSPI_SCKDIV_SCALE_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_SCKDIV_SCALE_MASK  (0xFFFul << 0ul)  /**< [11..0] Divisor for serial clock */

// Register 'qspi.sckmode'.
#define SIFIVE_FE310_QSPI_SCKMODE_PHA_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_SCKMODE_PHA_MASK  (0x1ul << 0ul)  /**< [0..0] Serial clock phase */
#define SIFIVE_FE310_QSPI_SCKMODE_PHA  (1ul << 0ul)
#define SIFIVE_FE310_QSPI_SCKMODE_POL_POSITION  (1ul)
#define SIFIVE_FE310_QSPI_SCKMODE_POL_MASK  (0x1ul << 1ul)  /**< [1..1] Serial clock polarity */
#define SIFIVE_FE310_QSPI_SCKMODE_POL  (1ul << 1ul)

// Register 'qspi.csmode'.
#define SIFIVE_FE310_QSPI_CSMODE_MODE_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_CSMODE_MODE_MASK  (0x3ul << 0ul)  /**< [1..0] Chip select mode */
#define SIFIVE_FE310_QSPI_CSMODE_MODE_AUTO  (0ul << 0ul)  /**< Assert/de-assert CS at the beginning/end of each frame */
#define SIFIVE_FE310_QSPI_CSMODE_MODE_HOLD  (2ul << 0ul)  /**< Keep CS continuously asserted after the initial frame */
#define SIFIVE_FE310_QSPI_CSMODE_MODE_OFF  (3ul << 0ul)  /**< Disable hardware control of the CS pin */

// Register 'qspi.delay0'.
#define SIFIVE_FE310_QSPI_DELAY0_CSSCK_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_DELAY0_CSSCK_MASK  (0xFFul << 0ul)  /**< [7..0] CS to SCK Delay */
#define SIFIVE_FE310_QSPI_DELAY0_SCKCS_POSITION  (16ul)
#define SIFIVE_FE310_QSPI_DELAY0_SCKCS_MASK  (0xFFul << 16ul)  /**< [23..16] SCK to CS Delay */

// Register 'qspi.delay1'.
#define SIFIVE_FE310_QSPI_DELAY1_INTERCS_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_DELAY1_INTERCS_MASK  (0xFFul << 0ul)  /**< [7..0] Minimum CS inactive time */
#define SIFIVE_FE310_QSPI_DELAY1_INTERXFR_POSITION  (16ul)
#define SIFIVE_FE310_QSPI_DELAY1_INTERXFR_MASK  (0xFFul << 16ul)  /**< [23..16] Maximum interframe delay */

// Register 'qspi.fmt'.
#define SIFIVE_FE310_QSPI_FMT_PROTO_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_FMT_PROTO_MASK  (0x3ul << 0ul)  /**< [1..0] SPI Protocol */
#define SIFIVE_FE310_QSPI_FMT_PROTO_SINGLE  (0ul << 0ul)  /**< DQ0 (MOSI), DQ1 (MISO) */
#define SIFIVE_FE310_QSPI_FMT_PROTO_DUAL  (1ul << 0ul)  /**< DQ0, DQ1 */
#define SIFIVE_FE310_QSPI_FMT_PROTO_QUAD  (2ul << 0ul)  /**< DQ0, DQ1, DQ2, DQ3 */
#define SIFIVE_FE310_QSPI_FMT_ENDIAN_POSITION  (2ul)
#define SIFIVE_FE310_QSPI_FMT_ENDIAN_MASK  (0x1ul << 2ul)  /**< [2..2] SPI endianness */
#define SIFIVE_FE310_QSPI_FMT_ENDIAN_MSB  (0ul << 2ul)  /**< Transmit most-significant bit (MSB) first */
#define SIFIVE_FE310_QSPI_FMT_ENDIAN_LSB  (1ul << 2ul)  /**< Transmit least-significant bit (LSB) first */
#define SIFIVE_FE310_QSPI_FMT_DIR_POSITION  (3ul)
#define SIFIVE_FE310_QSPI_FMT_DIR_MASK  (0x1ul << 3ul)  /**< [3..3] SPI I/O Direction */
#define SIFIVE_FE310_QSPI_FMT_DIR_RX  (0ul << 3ul)  /**< For dual and quad protocols, the DQ pins are tri-stated. For the single protocol, the DQ0 pin is driven with the transmit data as normal. */
#define SIFIVE_FE310_QSPI_FMT_DIR_TX  (1ul << 3ul)  /**< The receive FIFO is not populated. */
#define SIFIVE_FE310_QSPI_FMT_LEN_POSITION  (16ul)
#define SIFIVE_FE310_QSPI_FMT_LEN_MASK  (0xFul << 16ul)  /**< [19..16] Number of bits per frame */

// Register 'qspi.txdata'.
#define SIFIVE_FE310_QSPI_TXDATA_DATA_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_TXDATA_DATA_MASK  (0xFFul << 0ul)  /**< [7..0] Transmit data */
#define SIFIVE_FE310_QSPI_TXDATA_FULL_POSITION  (31ul)
#define SIFIVE_FE310_QSPI_TXDATA_FULL_MASK  (0x1ul << 31ul)  /**< [31..31] FIFO full flag */
#define SIFIVE_FE310_QSPI_TXDATA_FULL  (1ul << 31ul)

// Register 'qspi.rxdata'.
#define SIFIVE_FE310_QSPI_RXDATA_DATA_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_RXDATA_DATA_MASK  (0xFFul << 0ul)  /**< [7..0] Received data */
#define SIFIVE_FE310_QSPI_RXDATA_EMPTY_POSITION  (31ul)
#define SIFIVE_FE310_QSPI_RXDATA_EMPTY_MASK  (0x1ul << 31ul)  /**< [31..31] FIFO empty flag */
#define SIFIVE_FE310_QSPI_RXDATA_EMPTY  (1ul << 31ul)

// Register 'qspi.txmark'.
#define SIFIVE_FE310_QSPI_TXMARK_VALUE_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_TXMARK_VALUE_MASK  (0x7ul << 0ul)  /**< [2..0] Transmit watermark */

// Register 'qspi.rxmark'.
#define SIFIVE_FE310_QSPI_RXMARK_VALUE_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_RXMARK_VALUE_MASK  (0x7ul << 0ul)  /**< [2..0] Receive watermark */

// Register 'qspi.fctrl'.
#define SIFIVE_FE310_QSPI_FCTRL_EN_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_FCTRL_EN_MASK  (0x1ul << 0ul)  /**< [0..0] SPI Flash Mode Select */
#define SIFIVE_FE310_QSPI_FCTRL_EN  (1ul << 0ul)

// Register 'qspi.ffmt'.
#define SIFIVE_FE310_QSPI_FFMT_CMDEN_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_FFMT_CMDEN_MASK  (0x1ul << 0ul)  /**< [0..0] Enable sending of command */
#define SIFIVE_FE310_QSPI_FFMT_CMDEN  (1ul << 0ul)
#define SIFIVE_FE310_QSPI_FFMT_ADDRLEN_POSITION  (1ul)
#define SIFIVE_FE310_QSPI_FFMT_ADDRLEN_MASK  (0x7ul << 1ul)  /**< [3..1] Number of address bytes(0 to 4) */
#define SIFIVE_FE310_QSPI_FFMT_PADCNT_POSITION  (4ul)
#define SIFIVE_FE310_QSPI_FFMT_PADCNT_MASK  (0xFul << 4ul)  /**< [7..4] Number of dummy cycles */
#define SIFIVE_FE310_QSPI_FFMT_CMDPROTO_POSITION  (8ul)
#define SIFIVE_FE310_QSPI_FFMT_CMDPROTO_MASK  (0x3ul << 8ul)  /**< [9..8] Protocol for transmitting command */
#define SIFIVE_FE310_QSPI_FFMT_ADDRPROTO_POSITION  (10ul)
#define SIFIVE_FE310_QSPI_FFMT_ADDRPROTO_MASK  (0x3ul << 10ul)  /**< [11..10] Protocol for transmitting address and padding */
#define SIFIVE_FE310_QSPI_FFMT_DATAPROTO_POSITION  (12ul)
#define SIFIVE_FE310_QSPI_FFMT_DATAPROTO_MASK  (0x3ul << 12ul)  /**< [13..12] Protocol for receiving data bytes */
#define SIFIVE_FE310_QSPI_FFMT_CMDCODE_POSITION  (16ul)
#define SIFIVE_FE310_QSPI_FFMT_CMDCODE_MASK  (0xFFul << 16ul)  /**< [23..16] Value of command byte */
#define SIFIVE_FE310_QSPI_FFMT_PADCODE_POSITION  (24ul)
#define SIFIVE_FE310_QSPI_FFMT_PADCODE_MASK  (0xFFul << 24ul)  /**< [31..24] First 8 bits to transmit during dummy cycles */

// Register 'qspi.ie'.
#define SIFIVE_FE310_QSPI_IE_TXWM_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_IE_TXWM_MASK  (0x1ul << 0ul)  /**< [0..0] Transmit watermark enable */
#define SIFIVE_FE310_QSPI_IE_TXWM  (1ul << 0ul)
#define SIFIVE_FE310_QSPI_IE_RXWM_POSITION  (1ul)
#define SIFIVE_FE310_QSPI_IE_RXWM_MASK  (0x1ul << 1ul)  /**< [1..1] Receive watermark enable */
#define SIFIVE_FE310_QSPI_IE_RXWM  (1ul << 1ul)

// Register 'qspi.ip'.
#define SIFIVE_FE310_QSPI_IP_TXWM_POSITION  (0ul)
#define SIFIVE_FE310_QSPI_IP_TXWM_MASK  (0x1ul << 0ul)  /**< [0..0] Transmit watermark pending */
#define SIFIVE_FE310_QSPI_IP_TXWM  (1ul << 0ul)
#define SIFIVE_FE310_QSPI_IP_RXWM_POSITION  (1ul)
#define SIFIVE_FE310_QSPI_IP_RXWM_MASK  (0x1ul << 1ul)  /**< [1..1] Receive watermark pending */
#define SIFIVE_FE310_QSPI_IP_RXWM  (1ul << 1ul)

// ----------------------------------------------------------------------------
// Struct 'sifive_fe310_pwm0_t' positions & masks.

// Register 'pwm0.cfg'.
#define SIFIVE_FE310_PWM0_CFG_SCALE_POSITION  (0ul)
#define SIFIVE_FE310_PWM0_CFG_SCALE_MASK  (0xFul << 0ul)  /**< [3..0] Counter scale */
#define SIFIVE_FE310_PWM0_CFG_STICKY_POSITION  (8ul)
#define SIFIVE_FE310_PWM0_CFG_STICKY_MASK  (0x1ul << 8ul)  /**< [8..8] Sticky - disallow clearing pwmcmpXip bits */
#define SIFIVE_FE310_PWM0_CFG_STICKY  (1ul << 8ul)
#define SIFIVE_FE310_PWM0_CFG_ZEROCMP_POSITION  (9ul)
#define SIFIVE_FE310_PWM0_CFG_ZEROCMP_MASK  (0x1ul << 9ul)  /**< [9..9] Zero - counter resets to zero after match */
#define SIFIVE_FE310_PWM0_CFG_ZEROCMP  (1ul << 9ul)
#define SIFIVE_FE310_PWM0_CFG_DEGLITCH_POSITION  (10ul)
#define SIFIVE_FE310_PWM0_CFG_DEGLITCH_MASK  (0x1ul << 10ul)  /**< [10..10] Deglitch - latch pwmcmpXip within same cycle */
#define SIFIVE_FE310_PWM0_CFG_DEGLITCH  (1ul << 10ul)
#define SIFIVE_FE310_PWM0_CFG_ENALWAYS_POSITION  (12ul)
#define SIFIVE_FE310_PWM0_CFG_ENALWAYS_MASK  (0x1ul << 12ul)  /**< [12..12] Enable always - run continuously */
#define SIFIVE_FE310_PWM0_CFG_ENALWAYS  (1ul << 12ul)
#define SIFIVE_FE310_PWM0_CFG_ENONESHOT_POSITION  (13ul)
#define SIFIVE_FE310_PWM0_CFG_ENONESHOT_MASK  (0x1ul << 13ul)  /**< [13..13] enable one shot - run one cycle */
#define SIFIVE_FE310_PWM0_CFG_ENONESHOT  (1ul << 13ul)
#define SIFIVE_FE310_PWM0_CFG_CMP0CENTER_POSITION  (16ul)
#define SIFIVE_FE310_PWM0_CFG_CMP0CENTER_MASK  (0x1ul << 16ul)  /**< [16..16] PWM0 Compare Center */
#define SIFIVE_FE310_PWM0_CFG_CMP0CENTER  (1ul << 16ul)
#define SIFIVE_FE310_PWM0_CFG_CMP1CENTER_POSITION  (17ul)
#define SIFIVE_FE310_PWM0_CFG_CMP1CENTER_MASK  (0x1ul << 17ul)  /**< [17..17] PWM1 Compare Center */
#define SIFIVE_FE310_PWM0_CFG_CMP1CENTER  (1ul << 17ul)
#define SIFIVE_FE310_PWM0_CFG_CMP2CENTER_POSITION  (18ul)
#define SIFIVE_FE310_PWM0_CFG_CMP2CENTER_MASK  (0x1ul << 18ul)  /**< [18..18] PWM2 Compare Center */
#define SIFIVE_FE310_PWM0_CFG_CMP2CENTER  (1ul << 18ul)
#define SIFIVE_FE310_PWM0_CFG_CMP3CENTER_POSITION  (19ul)
#define SIFIVE_FE310_PWM0_CFG_CMP3CENTER_MASK  (0x1ul << 19ul)  /**< [19..19] PWM3 Compare Center */
#define SIFIVE_FE310_PWM0_CFG_CMP3CENTER  (1ul << 19ul)
#define SIFIVE_FE310_PWM0_CFG_CMP0GANG_POSITION  (24ul)
#define SIFIVE_FE310_PWM0_CFG_CMP0GANG_MASK  (0x1ul << 24ul)  /**< [24..24] PWM0/PWM1 Compare Gang */
#define SIFIVE_FE310_PWM0_CFG_CMP0GANG  (1ul << 24ul)
#define SIFIVE_FE310_PWM0_CFG_CMP1GANG_POSITION  (25ul)
#define SIFIVE_FE310_PWM0_CFG_CMP1GANG_MASK  (0x1ul << 25ul)  /**< [25..25] PWM1/PWM2 Compare Gang */
#define SIFIVE_FE310_PWM0_CFG_CMP1GANG  (1ul << 25ul)
#define SIFIVE_FE310_PWM0_CFG_CMP2GANG_POSITION  (26ul)
#define SIFIVE_FE310_PWM0_CFG_CMP2GANG_MASK  (0x1ul << 26ul)  /**< [26..26] PWM2/PWM3 Compare Gang */
#define SIFIVE_FE310_PWM0_CFG_CMP2GANG  (1ul << 26ul)
#define SIFIVE_FE310_PWM0_CFG_CMP3GANG_POSITION  (27ul)
#define SIFIVE_FE310_PWM0_CFG_CMP3GANG_MASK  (0x1ul << 27ul)  /**< [27..27] PWM3/PWM0 Compare Gang */
#define SIFIVE_FE310_PWM0_CFG_CMP3GANG  (1ul << 27ul)
#define SIFIVE_FE310_PWM0_CFG_CMP0IP_POSITION  (28ul)
#define SIFIVE_FE310_PWM0_CFG_CMP0IP_MASK  (0x1ul << 28ul)  /**< [28..28] PWM0 Interrupt Pending */
#define SIFIVE_FE310_PWM0_CFG_CMP0IP  (1ul << 28ul)
#define SIFIVE_FE310_PWM0_CFG_CMP1IP_POSITION  (29ul)
#define SIFIVE_FE310_PWM0_CFG_CMP1IP_MASK  (0x1ul << 29ul)  /**< [29..29] PWM1 Interrupt Pending */
#define SIFIVE_FE310_PWM0_CFG_CMP1IP  (1ul << 29ul)
#define SIFIVE_FE310_PWM0_CFG_CMP2IP_POSITION  (30ul)
#define SIFIVE_FE310_PWM0_CFG_CMP2IP_MASK  (0x1ul << 30ul)  /**< [30..30] PWM2 Interrupt Pending */
#define SIFIVE_FE310_PWM0_CFG_CMP2IP  (1ul << 30ul)
#define SIFIVE_FE310_PWM0_CFG_CMP3IP_POSITION  (31ul)
#define SIFIVE_FE310_PWM0_CFG_CMP3IP_MASK  (0x1ul << 31ul)  /**< [31..31] PWM3 Interrupt Pending */
#define SIFIVE_FE310_PWM0_CFG_CMP3IP  (1ul << 31ul)

// Register 'pwm0.scale'.
#define SIFIVE_FE310_PWM0_SCALE_VALUE_POSITION  (0ul)
#define SIFIVE_FE310_PWM0_SCALE_VALUE_MASK  (0xFFul << 0ul)  /**< [7..0] Compare value */

// Register 'pwm0.cmp'.
#define SIFIVE_FE310_PWM0_CMP_VALUE_POSITION  (0ul)
#define SIFIVE_FE310_PWM0_CMP_VALUE_MASK  (0xFFul << 0ul)  /**< [7..0] Compare value */

// ----------------------------------------------------------------------------
// Struct 'sifive_fe310_pwm_t' positions & masks.

// Register 'pwm.cfg'.
#define SIFIVE_FE310_PWM_CFG_SCALE_POSITION  (0ul)
#define SIFIVE_FE310_PWM_CFG_SCALE_MASK  (0xFul << 0ul)  /**< [3..0] Counter scale */
#define SIFIVE_FE310_PWM_CFG_STICKY_POSITION  (8ul)
#define SIFIVE_FE310_PWM_CFG_STICKY_MASK  (0x1ul << 8ul)  /**< [8..8] Sticky - disallow clearing pwmcmpXip bits */
#define SIFIVE_FE310_PWM_CFG_STICKY  (1ul << 8ul)
#define SIFIVE_FE310_PWM_CFG_ZEROCMP_POSITION  (9ul)
#define SIFIVE_FE310_PWM_CFG_ZEROCMP_MASK  (0x1ul << 9ul)  /**< [9..9] Zero - counter resets to zero after match */
#define SIFIVE_FE310_PWM_CFG_ZEROCMP  (1ul << 9ul)
#define SIFIVE_FE310_PWM_CFG_DEGLITCH_POSITION  (10ul)
#define SIFIVE_FE310_PWM_CFG_DEGLITCH_MASK  (0x1ul << 10ul)  /**< [10..10] Deglitch - latch pwmcmpXip within same cycle */
#define SIFIVE_FE310_PWM_CFG_DEGLITCH  (1ul << 10ul)
#define SIFIVE_FE310_PWM_CFG_ENALWAYS_POSITION  (12ul)
#define SIFIVE_FE310_PWM_CFG_ENALWAYS_MASK  (0x1ul << 12ul)  /**< [12..12] Enable always - run continuously */
#define SIFIVE_FE310_PWM_CFG_ENALWAYS  (1ul << 12ul)
#define SIFIVE_FE310_PWM_CFG_ENONESHOT_POSITION  (13ul)
#define SIFIVE_FE310_PWM_CFG_ENONESHOT_MASK  (0x1ul << 13ul)  /**< [13..13] enable one shot - run one cycle */
#define SIFIVE_FE310_PWM_CFG_ENONESHOT  (1ul << 13ul)
#define SIFIVE_FE310_PWM_CFG_CMP0CENTER_POSITION  (16ul)
#define SIFIVE_FE310_PWM_CFG_CMP0CENTER_MASK  (0x1ul << 16ul)  /**< [16..16] PWM0 Compare Center */
#define SIFIVE_FE310_PWM_CFG_CMP0CENTER  (1ul << 16ul)
#define SIFIVE_FE310_PWM_CFG_CMP1CENTER_POSITION  (17ul)
#define SIFIVE_FE310_PWM_CFG_CMP1CENTER_MASK  (0x1ul << 17ul)  /**< [17..17] PWM1 Compare Center */
#define SIFIVE_FE310_PWM_CFG_CMP1CENTER  (1ul << 17ul)
#define SIFIVE_FE310_PWM_CFG_CMP2CENTER_POSITION  (18ul)
#define SIFIVE_FE310_PWM_CFG_CMP2CENTER_MASK  (0x1ul << 18ul)  /**< [18..18] PWM2 Compare Center */
#define SIFIVE_FE310_PWM_CFG_CMP2CENTER  (1ul << 18ul)
#define SIFIVE_FE310_PWM_CFG_CMP3CENTER_POSITION  (19ul)
#define SIFIVE_FE310_PWM_CFG_CMP3CENTER_MASK  (0x1ul << 19ul)  /**< [19..19] PWM3 Compare Center */
#define SIFIVE_FE310_PWM_CFG_CMP3CENTER  (1ul << 19ul)
#define SIFIVE_FE310_PWM_CFG_CMP0GANG_POSITION  (24ul)
#define SIFIVE_FE310_PWM_CFG_CMP0GANG_MASK  (0x1ul << 24ul)  /**< [24..24] PWM0/PWM1 Compare Gang */
#define SIFIVE_FE310_PWM_CFG_CMP0GANG  (1ul << 24ul)
#define SIFIVE_FE310_PWM_CFG_CMP1GANG_POSITION  (25ul)
#define SIFIVE_FE310_PWM_CFG_CMP1GANG_MASK  (0x1ul << 25ul)  /**< [25..25] PWM1/PWM2 Compare Gang */
#define SIFIVE_FE310_PWM_CFG_CMP1GANG  (1ul << 25ul)
#define SIFIVE_FE310_PWM_CFG_CMP2GANG_POSITION  (26ul)
#define SIFIVE_FE310_PWM_CFG_CMP2GANG_MASK  (0x1ul << 26ul)  /**< [26..26] PWM2/PWM3 Compare Gang */
#define SIFIVE_FE310_PWM_CFG_CMP2GANG  (1ul << 26ul)
#define SIFIVE_FE310_PWM_CFG_CMP3GANG_POSITION  (27ul)
#define SIFIVE_FE310_PWM_CFG_CMP3GANG_MASK  (0x1ul << 27ul)  /**< [27..27] PWM3/PWM0 Compare Gang */
#define SIFIVE_FE310_PWM_CFG_CMP3GANG  (1ul << 27ul)
#define SIFIVE_FE310_PWM_CFG_CMP0IP_POSITION  (28ul)
#define SIFIVE_FE310_PWM_CFG_CMP0IP_MASK  (0x1ul << 28ul)  /**< [28..28] PWM0 Interrupt Pending */
#define SIFIVE_FE310_PWM_CFG_CMP0IP  (1ul << 28ul)
#define SIFIVE_FE310_PWM_CFG_CMP1IP_POSITION  (29ul)
#define SIFIVE_FE310_PWM_CFG_CMP1IP_MASK  (0x1ul << 29ul)  /**< [29..29] PWM1 Interrupt Pending */
#define SIFIVE_FE310_PWM_CFG_CMP1IP  (1ul << 29ul)
#define SIFIVE_FE310_PWM_CFG_CMP2IP_POSITION  (30ul)
#define SIFIVE_FE310_PWM_CFG_CMP2IP_MASK  (0x1ul << 30ul)  /**< [30..30] PWM2 Interrupt Pending */
#define SIFIVE_FE310_PWM_CFG_CMP2IP  (1ul << 30ul)
#define SIFIVE_FE310_PWM_CFG_CMP3IP_POSITION  (31ul)
#define SIFIVE_FE310_PWM_CFG_CMP3IP_MASK  (0x1ul << 31ul)  /**< [31..31] PWM3 Interrupt Pending */
#define SIFIVE_FE310_PWM_CFG_CMP3IP  (1ul << 31ul)

// Register 'pwm.scale'.
#define SIFIVE_FE310_PWM_SCALE_VALUE_POSITION  (0ul)
#define SIFIVE_FE310_PWM_SCALE_VALUE_MASK  (0xFFFFul << 0ul)  /**< [15..0] Compare value */

// Register 'pwm.cmp'.
#define SIFIVE_FE310_PWM_CMP_VALUE_POSITION  (0ul)
#define SIFIVE_FE310_PWM_CMP_VALUE_MASK  (0xFFFFul << 0ul)  /**< [15..0] Compare value */

// ----------------------------------------------------------------------------
// Peripheral 'clint' offsets.

#define SIFIVE_FE310_CLINT_MSIP_OFFSET (0x00000000ul)  /**< 0x02000000: MSIP (Machine-mode Software Interrupts) Register per Hart */
#define SIFIVE_FE310_CLINT_MTIMECMP_OFFSET (0x00004000ul)  /**< 0x02004000: Machine Time Compare Registers per Hart */
#define SIFIVE_FE310_CLINT_MTIMECMP_LOW_OFFSET (0x00004000ul)  /**< 0x02004000: Machine Compare Register Low */
#define SIFIVE_FE310_CLINT_MTIMECMP_HIGH_OFFSET (0x00004004ul)  /**< 0x02004004: Machine Compare Register High */
#define SIFIVE_FE310_CLINT_MTIME_OFFSET (0x0000BFF8ul)  /**< 0x0200BFF8: Machine Time Register */
#define SIFIVE_FE310_CLINT_MTIME_LOW_OFFSET (0x0000BFF8ul)  /**< 0x0200BFF8: Machine Time Register Low */
#define SIFIVE_FE310_CLINT_MTIME_HIGH_OFFSET (0x0000BFFCul)  /**< 0x0200BFFC: Machine Time Register High */

// ----------------------------------------------------------------------------
// Peripheral 'plic' offsets.

#define SIFIVE_FE310_PLIC_PRIORITIES_OFFSET (0x00000004ul)  /**< 0x0C000004: Interrupt Priorities Registers */
#define SIFIVE_FE310_PLIC_PENDINGS_OFFSET (0x00001000ul)  /**< 0x0C001000: Interrupt Pending Bits Registers */
#define SIFIVE_FE310_PLIC_ENABLESTARGET0_OFFSET (0x00002000ul)  /**< 0x0C002000: Hart 0 Interrupt Enable Bits */
#define SIFIVE_FE310_PLIC_ENABLESTARGET0_M_OFFSET (0x00002000ul)  /**< 0x0C002000: Hart 0 M-mode Interrupt Enable Bits */
#define SIFIVE_FE310_PLIC_ENABLESTARGET0_M_ENABLES_OFFSET (0x00002000ul)  /**< 0x0C002000: Interrupt Enable Bits Registers */
#define SIFIVE_FE310_PLIC_TARGET0_OFFSET (0x00200000ul)  /**< 0x0C200000: Hart 0 Interrupt Thresholds */
#define SIFIVE_FE310_PLIC_TARGET0_M_OFFSET (0x00200000ul)  /**< 0x0C200000: Hart 0 M-Mode Interrupt Threshold */
#define SIFIVE_FE310_PLIC_TARGET0_M_THRESHOLD_OFFSET (0x00200000ul)  /**< 0x0C200000: The Priority Threshold Register */
#define SIFIVE_FE310_PLIC_TARGET0_M_CLAIMCOMPLETE_OFFSET (0x00200004ul)  /**< 0x0C200004: The Interrupt Claim/Completion Register */

// ----------------------------------------------------------------------------
// Peripheral 'aon' offsets.

#define SIFIVE_FE310_AON_WDOGCFG_OFFSET (0x00000000ul)  /**< 0x10000000: Watchdog Configuration Register */
#define SIFIVE_FE310_AON_WDOGCOUNT_OFFSET (0x00000008ul)  /**< 0x10000008: Watchdog Count Register */
#define SIFIVE_FE310_AON_WDOGS_OFFSET (0x00000010ul)  /**< 0x10000010: Watchdog Scale Register */
#define SIFIVE_FE310_AON_WDOGFEED_OFFSET (0x00000018ul)  /**< 0x10000018: Watchdog Feed Address Register */
#define SIFIVE_FE310_AON_WDOGKEY_OFFSET (0x0000001Cul)  /**< 0x1000001C: Watchdog Key Register */
#define SIFIVE_FE310_AON_WDOGCMP_OFFSET (0x00000020ul)  /**< 0x10000020: Watchdog Compare Register */
#define SIFIVE_FE310_AON_RTCCFG_OFFSET (0x00000040ul)  /**< 0x10000040: RTC Configuration Register */
#define SIFIVE_FE310_AON_RTCLO_OFFSET (0x00000048ul)  /**< 0x10000048: RTC Counter Register Low */
#define SIFIVE_FE310_AON_RTCHI_OFFSET (0x0000004Cul)  /**< 0x1000004C: RTC Counter Register High */
#define SIFIVE_FE310_AON_RTCS_OFFSET (0x00000050ul)  /**< 0x10000050: RTC Scale Register */
#define SIFIVE_FE310_AON_RTCCMP_OFFSET (0x00000060ul)  /**< 0x10000060: RTC Compare Register */
#define SIFIVE_FE310_AON_LFROSCCFG_OFFSET (0x00000070ul)  /**< 0x10000070: Internal Programmable Low-Frequency Ring Oscillator Register */
#define SIFIVE_FE310_AON_BACKUP_OFFSET (0x00000080ul)  /**< 0x10000080: Backup Registers */
#define SIFIVE_FE310_AON_PMUWAKEUPI_OFFSET (0x00000100ul)  /**< 0x10000100: Wakeup program instruction Registers */
#define SIFIVE_FE310_AON_PMUSLEEPI_OFFSET (0x00000120ul)  /**< 0x10000120: Sleep Program Instruction Registers */
#define SIFIVE_FE310_AON_PMUIE_OFFSET (0x00000140ul)  /**< 0x10000140: PMU Interrupt Enables Register */
#define SIFIVE_FE310_AON_PMUCAUSE_OFFSET (0x00000144ul)  /**< 0x10000144: PMU Wakeup Cause Register */
#define SIFIVE_FE310_AON_PMUSLEEP_OFFSET (0x00000148ul)  /**< 0x10000148: Initiate Sleep Sequence Register */
#define SIFIVE_FE310_AON_PMUKEY_OFFSET (0x0000014Cul)  /**< 0x1000014C: PMU Key Register */

// ----------------------------------------------------------------------------
// Peripheral 'prci' offsets.

#define SIFIVE_FE310_PRCI_HFROSCCFG_OFFSET (0x00000000ul)  /**< 0x10008000: Internal Trimmable Programmable 72 MHz Oscillator Register */
#define SIFIVE_FE310_PRCI_HFXOSCCFG_OFFSET (0x00000004ul)  /**< 0x10008004: External 16 MHz Crystal Oscillator Register */
#define SIFIVE_FE310_PRCI_PLLCFG_OFFSET (0x00000008ul)  /**< 0x10008008: Internal High-Frequency PLL (HFPLL) Register */
#define SIFIVE_FE310_PRCI_PLLOUTDIV_OFFSET (0x0000000Cul)  /**< 0x1000800C: PLL Output Divider */

// ----------------------------------------------------------------------------
// Peripheral 'otp' offsets.

#define SIFIVE_FE310_OTP_LOCK_OFFSET (0x00000000ul)  /**< 0x10010000: Programmed-I/O Lock Register */
#define SIFIVE_FE310_OTP_CK_OFFSET (0x00000004ul)  /**< 0x10010004: Device Clock Signal Register */
#define SIFIVE_FE310_OTP_OE_OFFSET (0x00000008ul)  /**< 0x10010008: Device Output-Enable Signal Register */
#define SIFIVE_FE310_OTP_SEL_OFFSET (0x0000000Cul)  /**< 0x1001000C: Device Chip-Select Signal Register */
#define SIFIVE_FE310_OTP_WE_OFFSET (0x00000010ul)  /**< 0x10010010: Device Write-Enable Signal Register */
#define SIFIVE_FE310_OTP_MR_OFFSET (0x00000014ul)  /**< 0x10010014: Device Mode Register */
#define SIFIVE_FE310_OTP_MRR_OFFSET (0x00000018ul)  /**< 0x10010018: Read-Voltage Regulator Control Register */
#define SIFIVE_FE310_OTP_MPP_OFFSET (0x0000001Cul)  /**< 0x1001001C: Write-Voltage Charge Pump Control Register */
#define SIFIVE_FE310_OTP_VRREN_OFFSET (0x00000020ul)  /**< 0x10010020: Read-Voltage Enable Register */
#define SIFIVE_FE310_OTP_VPPEN_OFFSET (0x00000024ul)  /**< 0x10010024: Write-Voltage Enable Register */
#define SIFIVE_FE310_OTP_A_OFFSET (0x00000028ul)  /**< 0x10010028: Device Address Register */
#define SIFIVE_FE310_OTP_D_OFFSET (0x0000002Cul)  /**< 0x1001002C: Device Data Input Register */
#define SIFIVE_FE310_OTP_Q_OFFSET (0x00000030ul)  /**< 0x10010030: Device Data Output Register */
#define SIFIVE_FE310_OTP_RSCTRL_OFFSET (0x00000034ul)  /**< 0x10010034: Read Sequencer Control Register */

// ----------------------------------------------------------------------------
// Peripheral 'gpio' offsets.

#define SIFIVE_FE310_GPIO_VALUE_OFFSET (0x00000000ul)  /**< 0x10012000: Pin Value Register */
#define SIFIVE_FE310_GPIO_INPUTEN_OFFSET (0x00000004ul)  /**< 0x10012004: Pin Input Enable Register */
#define SIFIVE_FE310_GPIO_OUTPUTEN_OFFSET (0x00000008ul)  /**< 0x10012008: Pin Output Enable Register */
#define SIFIVE_FE310_GPIO_PORT_OFFSET (0x0000000Cul)  /**< 0x1001200C: Output Port Value Register */
#define SIFIVE_FE310_GPIO_PUE_OFFSET (0x00000010ul)  /**< 0x10012010: Internal Pull-up Enable Register */
#define SIFIVE_FE310_GPIO_DS_OFFSET (0x00000014ul)  /**< 0x10012014: Pin Drive Strength Register */
#define SIFIVE_FE310_GPIO_RISEIE_OFFSET (0x00000018ul)  /**< 0x10012018: Rise Interrupt Enable Register */
#define SIFIVE_FE310_GPIO_RISEIP_OFFSET (0x0000001Cul)  /**< 0x1001201C: Rise Interrupt Pending Register */
#define SIFIVE_FE310_GPIO_FALLIE_OFFSET (0x00000020ul)  /**< 0x10012020: Fall Interrupt Enable Register */
#define SIFIVE_FE310_GPIO_FALLIP_OFFSET (0x00000024ul)  /**< 0x10012024: Fall Interrupt Pending Register */
#define SIFIVE_FE310_GPIO_HIGHIE_OFFSET (0x00000028ul)  /**< 0x10012028: High Interrupt Enable Register */
#define SIFIVE_FE310_GPIO_HIGHIP_OFFSET (0x0000002Cul)  /**< 0x1001202C: High Interrupt Pending Register */
#define SIFIVE_FE310_GPIO_LOWIE_OFFSET (0x00000030ul)  /**< 0x10012030: Low Interrupt Enable Register */
#define SIFIVE_FE310_GPIO_LOWIP_OFFSET (0x00000034ul)  /**< 0x10012034: Low Interrupt Pending Register */
#define SIFIVE_FE310_GPIO_IOFEN_OFFSET (0x00000038ul)  /**< 0x10012038: HW I/O Function Enable Register */
#define SIFIVE_FE310_GPIO_IOFSEL_OFFSET (0x0000003Cul)  /**< 0x1001203C: HW I/O Function Select Register */
#define SIFIVE_FE310_GPIO_OUTXOR_OFFSET (0x00000040ul)  /**< 0x10012040: Output XOR (invert) Register */

// ----------------------------------------------------------------------------
// Peripheral 'uart' offsets.

#define SIFIVE_FE310_UART_TXDATA_OFFSET (0x00000000ul)  /**< 0x10013000: Transmit Data Register */
#define SIFIVE_FE310_UART_RXDATA_OFFSET (0x00000004ul)  /**< 0x10013004: Receive Data Register */
#define SIFIVE_FE310_UART_TXCTRL_OFFSET (0x00000008ul)  /**< 0x10013008: Transmit Control Register  */
#define SIFIVE_FE310_UART_RXCTRL_OFFSET (0x0000000Cul)  /**< 0x1001300C: Receive Control Register */
#define SIFIVE_FE310_UART_IE_OFFSET (0x00000010ul)  /**< 0x10013010: Interrupt Enable Register */
#define SIFIVE_FE310_UART_IP_OFFSET (0x00000014ul)  /**< 0x10013014: Interrupt Pending Register */
#define SIFIVE_FE310_UART_DIV_OFFSET (0x00000018ul)  /**< 0x10013018: Baud Rate Divisor Register */

// ----------------------------------------------------------------------------
// Peripheral 'qspi' offsets.

#define SIFIVE_FE310_QSPI_SCKDIV_OFFSET (0x00000000ul)  /**< 0x10014000: Serial clock divisor Register */
#define SIFIVE_FE310_QSPI_SCKMODE_OFFSET (0x00000004ul)  /**< 0x10014004: Serial Clock Mode Register */
#define SIFIVE_FE310_QSPI_CSID_OFFSET (0x00000010ul)  /**< 0x10014010: Chip Select ID Register */
#define SIFIVE_FE310_QSPI_CSDEF_OFFSET (0x00000014ul)  /**< 0x10014014: Chip Select Default Register */
#define SIFIVE_FE310_QSPI_CSMODE_OFFSET (0x00000018ul)  /**< 0x10014018: Chip Select Mode Register */
#define SIFIVE_FE310_QSPI_DELAY0_OFFSET (0x00000028ul)  /**< 0x10014028: Delay Control 0 Register */
#define SIFIVE_FE310_QSPI_DELAY1_OFFSET (0x0000002Cul)  /**< 0x1001402C: Delay Control 1 Register */
#define SIFIVE_FE310_QSPI_FMT_OFFSET (0x00000040ul)  /**< 0x10014040: Frame Format Register */
#define SIFIVE_FE310_QSPI_TXDATA_OFFSET (0x00000048ul)  /**< 0x10014048: Tx FIFO Data Register */
#define SIFIVE_FE310_QSPI_RXDATA_OFFSET (0x0000004Cul)  /**< 0x1001404C: Rx FIFO Data Register */
#define SIFIVE_FE310_QSPI_TXMARK_OFFSET (0x00000050ul)  /**< 0x10014050: Tx FIFO Watermark Register */
#define SIFIVE_FE310_QSPI_RXMARK_OFFSET (0x00000054ul)  /**< 0x10014054: Rx FIFO Watermark Register */
#define SIFIVE_FE310_QSPI_FCTRL_OFFSET (0x00000060ul)  /**< 0x10014060: Flash Interface Control Register */
#define SIFIVE_FE310_QSPI_FFMT_OFFSET (0x00000064ul)  /**< 0x10014064: Flash Instruction Format Register */
#define SIFIVE_FE310_QSPI_IE_OFFSET (0x00000070ul)  /**< 0x10014070: Interrupt Enable Register */
#define SIFIVE_FE310_QSPI_IP_OFFSET (0x00000074ul)  /**< 0x10014074: Interrupt Pending Register */

// ----------------------------------------------------------------------------
// Peripheral 'pwm0' offsets.

#define SIFIVE_FE310_PWM0_CFG_OFFSET (0x00000000ul)  /**< 0x10015000: Configuration Register */
#define SIFIVE_FE310_PWM0_COUNT_OFFSET (0x00000008ul)  /**< 0x10015008: Configuration Register */
#define SIFIVE_FE310_PWM0_SCALE_OFFSET (0x00000010ul)  /**< 0x10015010: Scale Register */
#define SIFIVE_FE310_PWM0_CMP_OFFSET (0x00000020ul)  /**< 0x10015020: Compare Registers */

// ----------------------------------------------------------------------------
// Peripheral 'pwm' offsets.

#define SIFIVE_FE310_PWM_CFG_OFFSET (0x00000000ul)  /**< 0x10025000: Configuration Register */
#define SIFIVE_FE310_PWM_COUNT_OFFSET (0x00000008ul)  /**< 0x10025008: Configuration Register */
#define SIFIVE_FE310_PWM_SCALE_OFFSET (0x00000010ul)  /**< 0x10025010: Scale Register */
#define SIFIVE_FE310_PWM_CMP_OFFSET (0x00000020ul)  /**< 0x10025020: Compare Registers */

// ----------------------------------------------------------------------------
// Peripherals memory map.

#define SIFIVE_FE310_CLINT_BASE_ADDRESS  (0x02000000ul)
#define SIFIVE_FE310_PLIC_BASE_ADDRESS  (0x0C000000ul)
#define SIFIVE_FE310_AON_BASE_ADDRESS  (0x10000000ul)
#define SIFIVE_FE310_PRCI_BASE_ADDRESS  (0x10008000ul)
#define SIFIVE_FE310_OTP_BASE_ADDRESS  (0x10010000ul)
#define SIFIVE_FE310_GPIO_BASE_ADDRESS  (0x10012000ul)
#define SIFIVE_FE310_UART0_BASE_ADDRESS  (0x10013000ul)
#define SIFIVE_FE310_QSPI0_BASE_ADDRESS  (0x10014000ul)
#define SIFIVE_FE310_PWM0_BASE_ADDRESS  (0x10015000ul)
#define SIFIVE_FE310_UART1_BASE_ADDRESS  (0x10023000ul)
#define SIFIVE_FE310_QSPI1_BASE_ADDRESS  (0x10024000ul)
#define SIFIVE_FE310_PWM1_BASE_ADDRESS  (0x10025000ul)
#define SIFIVE_FE310_QSPI2_BASE_ADDRESS  (0x10034000ul)
#define SIFIVE_FE310_PWM2_BASE_ADDRESS  (0x10035000ul)

// ----------------------------------------------------------------------------
// Peripherals declarations.

#define CLINT  ((sifive_fe310_clint_t*) SIFIVE_FE310_CLINT_BASE_ADDRESS)
#define PLIC  ((sifive_fe310_plic_t*) SIFIVE_FE310_PLIC_BASE_ADDRESS)
#define AON  ((sifive_fe310_aon_t*) SIFIVE_FE310_AON_BASE_ADDRESS)
#define PRCI  ((sifive_fe310_prci_t*) SIFIVE_FE310_PRCI_BASE_ADDRESS)
#define OTP  ((sifive_fe310_otp_t*) SIFIVE_FE310_OTP_BASE_ADDRESS)
#define GPIO  ((sifive_fe310_gpio_t*) SIFIVE_FE310_GPIO_BASE_ADDRESS)
#define UART0  ((sifive_fe310_uart_t*) SIFIVE_FE310_UART0_BASE_ADDRESS)
#define QSPI0  ((sifive_fe310_qspi_t*) SIFIVE_FE310_QSPI0_BASE_ADDRESS)
#define PWM0  ((sifive_fe310_pwm0_t*) SIFIVE_FE310_PWM0_BASE_ADDRESS)
#define UART1  ((sifive_fe310_uart_t*) SIFIVE_FE310_UART1_BASE_ADDRESS)
#define QSPI1  ((sifive_fe310_qspi_t*) SIFIVE_FE310_QSPI1_BASE_ADDRESS)
#define PWM1  ((sifive_fe310_pwm_t*) SIFIVE_FE310_PWM1_BASE_ADDRESS)
#define QSPI2  ((sifive_fe310_qspi_t*) SIFIVE_FE310_QSPI2_BASE_ADDRESS)
#define PWM2  ((sifive_fe310_pwm_t*) SIFIVE_FE310_PWM2_BASE_ADDRESS)

// ----------------------------------------------------------------------------

/**
 * @}
 */ /* End of group device-peripheral-registers */

/**
 * @} 
 */ /* End of group fe310 */

/**
 * @} 
 */ /* End of group sifive */

#if defined(__cplusplus)
}
#endif

// ----------------------------------------------------------------------------

#endif /* SIFIVE_DEVICES_FE310_DEVICE_PERIPHERALS_H_ */
