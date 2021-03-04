#
# This file is part of the µOS++ distribution.
#   (https://github.com/micro-os-plus)
# Copyright (c) 2021 Liviu Ionescu
#
# This Source Code Form is subject to the terms of the MIT License.
# If a copy of the license was not distributed with this file, it can
# be obtained from https://opensource.org/licenses/MIT/.
#
# -----------------------------------------------------------------------------

# https://cmake.org/cmake/help/v3.18/
# https://cmake.org/cmake/help/v3.18/manual/cmake-packages.7.html#package-configuration-file

if(xpack-sifive-devices-included)
  return()
endif()

set(xpack-sifive-devices-included TRUE)

message(STATUS "Processing xPack ${PACKAGE_JSON_NAME}@${PACKAGE_JSON_VERSION}...")

# -----------------------------------------------------------------------------

find_package(micro-os-plus-architecture-riscv REQUIRED)

# -----------------------------------------------------------------------------

# This also requires xpack_device_compile_definition to be defined by the user.

get_filename_component(xpack_current_folder ${CMAKE_CURRENT_LIST_DIR} DIRECTORY)

# -----------------------------------------------------------------------------

if(NOT TARGET xpack-sifive-devices-interface)

  add_library(xpack-sifive-devices-interface INTERFACE EXCLUDE_FROM_ALL)

  # Hopefully the file names follow the symbol definitions.
  string(TOLOWER ${xpack_device_compile_definition} device_name)

  set(source_files
    ${xpack_current_folder}/src/device-functions.cpp
    ${xpack_current_folder}/src/plic-functions.cpp
  )

  if("${xpack_device_compile_definition}" STREQUAL "SIFIVE_FE310")
    list(APPEND <list>
      ${xpack_current_folder}/src/fe310/diag/trace-uart.cpp
      ${xpack_current_folder}/src/fe310/device-interrupts.cpp
    )
  else()
    # TODO: add Arty e31/e51.
  endif()
      
  xpack_display_relative_paths("${source_files}" "${xpack_current_folder}")

  target_sources(
    xpack-sifive-devices-interface

    INTERFACE
      ${source_files}
  )

  target_include_directories(
    xpack-sifive-devices-interface

    INTERFACE
      ${xpack_current_folder}/include
  )

  message(STATUS "+ ${xpack_device_compile_definition}")
  
  target_compile_definitions(
    xpack-sifive-devices-interface

    INTERFACE
      ${xpack_device_compile_definition}
  )

  target_link_libraries(
    xpack-sifive-devices-interface

    INTERFACE
      micro-os-plus::architecture-riscv
      micro-os-plus::architecture-riscv-device
      micro-os-plus::diag-trace
  )

  # ---------------------------------------------------------------------------
  # Aliases.

  add_library(sifive::devices ALIAS xpack-sifive-devices-interface)
  message(STATUS "=> sifive::devices")

endif()

# -----------------------------------------------------------------------------
