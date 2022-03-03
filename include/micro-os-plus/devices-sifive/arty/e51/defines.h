/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus/)
 * Copyright (c) 2017 Liviu Ionescu.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/MIT/.
 */

#ifndef SIFIVE_DEVICES_ARTY_E51_DEFINES_H_
#define SIFIVE_DEVICES_ARTY_E51_DEFINES_H_

// ----------------------------------------------------------------------------

#include <stdint.h>

// ----------------------------------------------------------------------------

#define RISCV_INTERRUPTS_LOCAL_LAST_NUMBER (31u)

#define SIFIVE_E51ARTY_GPIO_PINS_LAST_NUMBER (15u)

// ----------------------------------------------------------------------------

// The names of the RISCV_MMIO_ symbols are architecture specific,
// but their values depend on a specific device implementation.
// These definitions will be used in <riscv-arch/device-functions-inlines.h>,
// included in <micro-os-plus/device..

#define RISCV_MMIO_MTIME_ADDRESS \
  (SIFIVE_E51ARTY_CLINT_BASE_ADDRESS + SIFIVE_E51ARTY_CLINT_MTIME_OFFSET)
#define RISCV_MMIO_MTIMECMP_ADDRESS \
  (SIFIVE_E51ARTY_CLINT_BASE_ADDRESS + SIFIVE_E51ARTY_CLINT_MTIMECMP_OFFSET)

// ----------------------------------------------------------------------------

// TODO: sort them out

// #define MIP_MLIP(x)        (1 << (IRQ_M_LOCAL + x))

// ----------------------------------------------------------------------------

#endif // SIFIVE_DEVICES_ARTY_E51_DEFINES_H_

// ----------------------------------------------------------------------------
