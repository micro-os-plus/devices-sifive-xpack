/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.io/).
 * Copyright (c) 2017-2025 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/mit.
 */

#ifndef SIFIVE_DEVICES_FUNCTIONS_H_
#define SIFIVE_DEVICES_FUNCTIONS_H_

// ----------------------------------------------------------------------------

#include <micro-os-plus/devices-sifive/defines.h>

#include <stdint.h>

// ----------------------------------------------------------------------------

/*
 * Device support functions.
 *
 * Inline functions are first defined in C (prefixed with `riscv_device_`),
 * then, for convenience, are redefined in C++ in the `riscv::device::`
 * namespace.
 *
 * Regular functions are first defined in C++ then aliased to C.
 */

#if defined(__cplusplus)
extern "C"
{
#endif // defined(__cplusplus)

  // --------------------------------------------------------------------------
  // Device support functions in C.

  // TODO: add functions.
  // Prefix them with `riscv_device_`.

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)

// ----------------------------------------------------------------------------

#if defined(__cplusplus)

// ----------------------------------------------------------------------------

namespace riscv
{
  namespace device
  {
    // ------------------------------------------------------------------------
    // Device support functions in C++.

    // TODO: add functions.

    // ------------------------------------------------------------------------
  } // namespace device
} // namespace riscv

// ----------------------------------------------------------------------------

#endif // defined(__cplusplus)

// ----------------------------------------------------------------------------

#endif // SIFIVE_DEVICES_FUNCTIONS_H_

// ----------------------------------------------------------------------------
