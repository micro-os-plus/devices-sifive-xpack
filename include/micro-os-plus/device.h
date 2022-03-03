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

#ifndef MICRO_OS_PLUS_DEVICE_H_
#define MICRO_OS_PLUS_DEVICE_H_

// ----------------------------------------------------------------------------

// Architecture definitions.
#include <micro-os-plus/architecture.h>

// Automatically generated device header files.
#include <micro-os-plus/devices-sifive/device-peripherals.h>

// Additional definitions and types.
#include <micro-os-plus/devices-sifive/defines.h>
#include <micro-os-plus/devices-sifive/types.h>

// API function prototypes.
// Currently not used.
// #include <micro-os-plus/devices-sifive/functions.h>
// #include <micro-os-plus/devices-sifive/functions-inlines.h>

#include <micro-os-plus/devices-sifive/device-interrupts-handlers.h>

// The names of the RISCV_MMIO_ symbols are architecture specific,
// but their values depend on a specific device implementation.
// These definitions are used in <riscv-arch/device-functions-inlines.h>,
// included below.

#if !defined(RISCV_MMIO_MTIME_ADDRESS)
#error \
    "Define RISCV_MMIO_MTIME_ADDRESS in the device specific header file (defines.h)."
#endif

#if !defined(RISCV_MMIO_MTIMECMP_ADDRESS)
#error \
    "Define RISCV_MMIO_MTIMECMP_ADDRESS in the device specific header file (defines.h)."
#endif

#include <micro-os-plus/architecture-riscv/device-functions.h>
#include <micro-os-plus/architecture-riscv/device-functions-inlines.h>

#include <micro-os-plus/architecture-riscv/plic-functions.h>
#include <micro-os-plus/devices-sifive/plic-functions-inlines.h>

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_DEVICE_H_

// ----------------------------------------------------------------------------
