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

#ifndef SIFIVE_DEVICES_DEVICE_INTERRUPTS_HANDLERS_H_
#define SIFIVE_DEVICES_DEVICE_INTERRUPTS_HANDLERS_H_

// ----------------------------------------------------------------------------

#if defined(SIFIVE_FE310)
#include <micro-os-plus/devices-sifive/fe310/device-interrupts-handlers.h>
#elif defined(SIFIVE_E31ARTY)
#include <micro-os-plus/devices-sifive/arty/e31/device-interrupts-handlers.h>
#elif defined(SIFIVE_E51ARTY)
#include <micro-os-plus/devices-sifive/arty/e51/device-interrupts-handlers.h>
#else
#error "Unsupported device"
#endif

// ----------------------------------------------------------------------------

#endif // SIFIVE_DEVICES_DEVICE_INTERRUPTS_HANDLERS_H_

// ----------------------------------------------------------------------------
