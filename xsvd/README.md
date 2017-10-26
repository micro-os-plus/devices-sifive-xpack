The XSVD files are intended for:

* generating the device peripheral headers
* displaying the peripheral registers in Eclipse
* generating the QEMU code

These files were created by hand.

## Current issues & questions

Entries in reverse chronological order.

### 2017-10-26

* should `uart1` be included, considering its pins are not connected to any pads?
* are the names `qspi[012]` appropriate? or should we use `spi[012]`?
* for the `wdogcfg` register, I renamed the fields from `wdogscale`, `wdogrsten`, ..., to the more readable names `scale`, `rsten` (I removed the redundant prefix) 
* for the `pwm` register, I removed the redundant prefix
* the `plic` is not very clear, might need more work

