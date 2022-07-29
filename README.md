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
![customio_build](https://github.com/themindvirus/awesome-circuitpython/blob/macropad-mmio/customio_build.png)
![customio_test](https://github.com/themindvirus/awesome-circuitpython/blob/macropad-mmio/customio_test.png)
