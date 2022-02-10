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

#if defined(__riscv)

// ----------------------------------------------------------------------------

#if defined(MICRO_OS_PLUS_INCLUDE_CONFIG_H)
#include <micro-os-plus/config.h>
#endif // MICRO_OS_PLUS_INCLUDE_CONFIG_H

#include <micro-os-plus/device.h>
#include <micro-os-plus/startup/hooks.h>

#include <cstddef>

// ----------------------------------------------------------------------------

namespace riscv
{
  namespace device
  {
    // ------------------------------------------------------------------------
    // Device functions definitions.

    // TODO: add C++ functions.

    // ------------------------------------------------------------------------
  } // namespace device
} // namespace riscv

// ----------------------------------------------------------------------------
// C aliases to the C++ functions.

// TODO: add aliases.

// ----------------------------------------------------------------------------

#if !defined(MICRO_OS_PLUS_USE_SEMIHOSTING_SYSCALLS)

/**
 * @details
 * This function resets the MCU core.
 */
void __attribute__ ((noreturn, weak))
micro_os_plus_terminate (int code __attribute__ ((unused)))
{
#if defined(SIFIVE_FE310)
  // The Watchdog or PMU+RTC can be used to trigger a system reset.
  // TODO: find the best solution.
#elif defined(SIFIVE_E31ARTY) || defined(SIFIVE_E51ARTY)
  // There isn't a way to soft reset the E31/E51 images through the core.
#else
#error "Unsupported device."
#endif

#if defined(MICRO_OS_PLUS_DEBUG)
  riscv::architecture::ebreak ();
#endif // MICRO_OS_PLUS_DEBUG

  while (true)
    {
      riscv::architecture::wfi ();
    }
  /* NOTREACHED */
}

#endif // !defined(MICRO_OS_PLUS_USE_SEMIHOSTING_SYSCALLS)

// ----------------------------------------------------------------------------

#endif // defined(__riscv)

// ----------------------------------------------------------------------------
