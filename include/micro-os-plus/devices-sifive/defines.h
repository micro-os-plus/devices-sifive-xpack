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

#ifndef SIFIVE_DEVICES_DEFINES_H_
#define SIFIVE_DEVICES_DEFINES_H_

// ----------------------------------------------------------------------------

// Select one of the definition files based on device.
#if defined(SIFIVE_FE310)
#include <micro-os-plus/devices-sifive/fe310/defines.h>
#elif defined(SIFIVE_E31ARTY)
#include <micro-os-plus/devices-sifive/arty/e31/defines.h>
#elif defined(SIFIVE_E51ARTY)
#include <micro-os-plus/devices-sifive/arty/e51/defines.h>
#else
#error "Unsupported device"
#endif

// ----------------------------------------------------------------------------
// Defaults.

#if defined(RISCV_INTERRUPTS_LOCAL_LAST_NUMBER)
#if RISCV_INTERRUPTS_LOCAL_LAST_NUMBER < 15u
#error "RISCV_INTERRUPTS_LOCAL_LAST_NUMBER must be >= 15"
#endif
#else
#define RISCV_INTERRUPTS_LOCAL_LAST_NUMBER (15u)
#endif // defined(RISCV_INTERRUPTS_LOCAL_LAST_NUMBER)

// ----------------------------------------------------------------------------

#endif // SIFIVE_DEVICES_DEFINES_H_

// ----------------------------------------------------------------------------
