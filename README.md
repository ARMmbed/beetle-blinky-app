Beetle Blinky Demo Application
==============================

This repository contains a demo Blinky Application meant to demonstrate the capability of the ARM Beetle SoC to Blink a LED in mbed environment.
The application is compliant with mbed-os and mbed classic.

Buid procedure
--------------

* Setup the mbed environment. For all the information refer to [mbed](https://developer.mbed.org/).
* Install mbed-cli (requires python >= 2.7.11):
```
> pip install mbed-cli
```
:warning: This procedure may require ```sudo``` rights to complete correctly on Unix Systems.
* Verify that mbed-cli version is at least 0.8.9:
```
> mbed --version
```
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
* Install mbed-os core dependencies:
```
> pip install -r mbed-os/requirements.txt
```
:warning: This procedure may require ```sudo``` rights to complete correctly on Unix Systems.
* From the beetle-blinky-app directory compile the application:
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

Export the Beetle Blinky project to Keil MDK
--------------------------------------------

* From the command line, run the following command:
```
> mbed export -m ARM_BEETLE_SOC -i uvision5
```

* You should see the following output:
```
Successful:
  * ARM_BEETLE_SOC::uvision5    .\projectfiles\uvision5_ARM_BEETLE_SOC\Unnamed_Project
```

* The project files are contained into the directory: .\projectfiles\uvision5_ARM_BEETLE_SOC

![Image of Beetle Project on uVision5](img/uvision5_beetle_blinky_app.png)
