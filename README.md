# macropad-mmio
#### Sample CircuitPython8 Shared Module for enabling Memory Mapped Input/Output (MMIO) on Adafruit Macropad RP2040
#### Also applies to other chips based on an identical 64-bit-address (4-address-stride) 32-bit-value memory interface

## WARNING!: Use at your own risk! Back up your data before testing this firmware.
### Misuse of this library may cause serious unintentional damage to your board.
### All MMIO registers should return back to usable defaults after a hard reset.

RP2040 Datasheet: https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf \
MicroPython Port: https://github.com/adafruit/circuitpython/blob/main/py/obj.h \
Previous Docs(7): https://learn.adafruit.com/extending-circuitpython/inside-the-virtual-machine \
Building Docs(7): https://learn.adafruit.com/building-circuitpython

![screenshot](https://github.com/themindvirus/awesome-circuitpython/blob/macropad-mmio/screenshot.png)

### Migrating `shared-module` and `shared-bindings` Versions

From CircuitPython 7->8, `shared-bindings` must register in MicroPython by using a macro: \
`MP_REGISTER_MODULE(MP_QSTR_customio, customio_module, CIRCUITPY_CUSTOMIO);` \
where "customio" and "CUSTOMIO" are replaced by the new module name (case sensitive).

![customio_build](https://github.com/themindvirus/awesome-circuitpython/blob/macropad-mmio/customio_build.png)

### Building `customio`

The `customio` module was formed out of a previously written CircuitPython 7 Learn Guide Test Module \
combined with `dotenv` from the `shared-module` folder with the aim of reading the Temperature ADC Registers \
and other Hardware Peripherals built-in to the Raspberry Pi RP2040 Chip.

![customio_test](https://github.com/themindvirus/awesome-circuitpython/blob/macropad-mmio/customio_test.png)

### Future Work

The `customio` module could be reused to form the basis of other custom `shared-module` packages with the `io` extension, \
such as `mmioio` for chiplet-specific low-level register/peripheral access and `thermio` for Infrared Display and Positioning.
