## SiFive Freedom E310 device specific files

### How to use

The standard way to include the device files is:

```c
#include <micro-os-plus/device.h>
```

This will include all relevant device specific files.

### The `RISCV_MMIO_` symbols

The following symbols are architecture specific:

- `RISCV_MMIO_MTIME_ADDRESS`
- `RISCV_MMIO_MTIMECMP_ADDRESS`

but their values (unsigned numbers) depend on a specific device implementation  
and should be defined in the corresponding `defines.h` file (missing this
will trigger an validation error).

These definitions are used in `<riscv-arch/device-functions-inlines.h>`,
included in `<micro-os-plus/device.h>`.