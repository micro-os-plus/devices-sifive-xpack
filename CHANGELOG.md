## Change log

Changes in reverse chronological order.

### v1.0.2 (2018-04-16)

* bump deps & move back to npm
* update README developer info

### v1.0.1 (2018-01-24)

* update dependencies

### v1.0.0 (2018-01-24)

* [#14] devices-xcdl.json: fix typo
* device-functions.cpp: use riscv::arch
* [#13] add comments about how to reset
* README: add known problems for reset

### 2018-01-21

* [#12] Add os_terminate(), it is device specific

### 2018-01-15

* [#11] Use wfi() in infinite loops

### v0.3.0 (2018-01-09)

### 2017-12-30

* add license & copyright

### 2017-12-27

* update xcdl to 0.2.0
  * simplify supplier
  * rename compiler
  * rename defines
  * rename arch
* [#8] Rework the devices xcdl
  * use "mcus" to avoid repeating "devices"
  * rename "vendor" -> "supplier"
  * move the "xsvd" property inside "debug"
  * use "displayName" for devices
  
### 2017-12-06

* [#1] rename bitfields to value, to avoid repetition
  * rtc->high
  * wdog->scale
  * wdog->cmp
* [#2] ad bitfields to GPIO
* [#3] fe310-xsvd: pmu->cause undefined; the reset & wakeup default bits renamed `undefined`
* [#4] add headerName to pll enums, to differentiate `/2` from `div2`
* update all xsvd files to schema 0.2.4, version 0.2.0
* [#5] fe310-xsvd: add enum to pllcfg.f field
* [#6] fe310-xsvd: fix pll q enums

### v0.2.0 (2017-11-09)

* rename QSPI -> SPI

### v0.1.0 (2017-10-26)

* update for new GitHub names
* package.json: remove scripts.link

### v0.0.5 (2017-10-04)

* `package.json` clean-ups
* add `devices-xcdl.json`
* add `CHANGELOG.md`

### v0.0.4 (2017-09-18)

* remove `_IP` from `COREPLEX_IP`
* rename folder without `_ip`
* add typedefs for prci, gpio, uart, pwm
* remove `sifive/plic_driver.h`
* add plic inlines & cpp
* add types.h with plic types
* add `_local_device_` handlers
    - for E31/E51 there are 16 local interrupts
    - for E310 there are none
* package.json: add dependency on riscv-arch

### v0.0.3, v0.0.2, v0.0.1 (2017-09-05)

* initial version, inspired from Eclipse templates.


