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

message(STATUS "Including xpack-sifive-devices...")

# -----------------------------------------------------------------------------

function(target_sources_xpack_sifive_devices target)

  get_filename_component(xpack_root_folder ${CMAKE_CURRENT_FUNCTION_LIST_DIR} DIRECTORY)

  target_sources(
    ${target}

    PRIVATE
      # TODO: add Arty e31/e51.
      $<$<STREQUAL:"${xpack_device_compile_definition}","SIFIVE_FE310">:${xpack_root_folder}/src/fe310/diag/trace-uart.cpp>
      $<$<STREQUAL:"${xpack_device_compile_definition}","SIFIVE_FE310">:${xpack_root_folder}/src/fe310/device-interrupts.cpp>
      ${xpack_root_folder}/src/device-functions.cpp
      ${xpack_root_folder}/src/plic-functions.cpp
  )

endfunction()

# -----------------------------------------------------------------------------

function(target_include_directories_xpack_sifive_devices target)

  get_filename_component(xpack_root_folder ${CMAKE_CURRENT_FUNCTION_LIST_DIR} DIRECTORY)

  target_include_directories(
    ${target}

    PUBLIC
      ${xpack_root_folder}/include
  )

endfunction()

# -----------------------------------------------------------------------------
