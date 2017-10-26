## SiFive device specific files

### How to use

The standard way to include the device files is

```c
#include <micro-os-plus/device.h>
```

## Developer info

This section is intended to developers who plan to include this library in their own projects.

### Easy install

The source files are available from [GitHub](https://github.com/micro-os-plus/sifive-devices-xpack):

```console
$ git clone https://github.com/micro-os-plus/sifive-devices-xpack.git sifive-devices-xpack.git
```

The library will shortly be available from the npm registry:

```console
$ npm install @sifive/coreplex-devices
```

### Prerequisites

The source code require a modern C++ compiler, preferably GCC 5 or higher, but was also compiled with GCC 4.8. 

### How to publish

* commit all changes
* update `CHANGELOG.md`; commit with a message like _prepare v0.1.2_
* `npm version patch`
* push all changes to GitHub
* `npm publish`

## License

The original content is released under the MIT License, with all rights reserved to Liviu Ionescu.

