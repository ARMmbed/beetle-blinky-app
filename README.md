Beetle Blinky Demo Application
==============================

This repository contains a demo Blinky Application meant to demonstrate the capability of the ARM Beetle SoC to Blink a LED in mbed environment.
The application is compliant with mbed-os and mbed classic.

Buid procedure
--------------

* Setup the mbed environment. For all the information refer to [mbed](https://developer.mbed.org/).
* Clone this repository:
```
> git clone https://github.com/ARMmbed/beetle-blinky-app.git
```
* Enter into beetle-blinky-app:
```
> cd beetle-blinky-app
```
* Update and Sync mbed-os:
```
> mbed update
> mbed sync
```
* Temporarily fetch the latetes mbed core (this step will not be necessary once all the beetle patches will be part of mbed-os):
```
> cd mbed-os/core
> git fetch
> git pull --rebase origin master
```
* Go back to beetle-blinky-app directory and compile the application:
```
* GCC_ARM:
> mbed compile -m ARM_BEETLE_SOC -t GCC_ARM
* ARMCC:
> mbed compile -m ARM_BEETLE_SOC -t ARM
```
* The generated application will be in .build/ARM_BEETLE_SOC/compiler-name/beetle-blinky-app.bin

Flash Procedure and Testing
---------------------------

* For the flashing procedure and the Serial port configuration please refer to [Beetle mbed Instructions](https://community.arm.com/docs/DOC-11614).
* Connect a LED to the PIN D9. Instructions on how to perform this operation can be found at [Beetle mbed FAQ](https://community.arm.com/docs/DOC-11713).
* After completing the procedure you should be able to visualize on the serial port a message like:
```
ARM SSG BEETLE.SYSTEM.CORE.2.0.1.0 Jul 20 2016 12:11:15
Device Name: Beetle-IoT-Blinky
MAC Address: ff:ff:ff:ff:ff:ff
==================
Welcome to MBED-OS
Beetle Blinky Application
```
* At this point you should be able to see the LED connected to D9 blinking.
