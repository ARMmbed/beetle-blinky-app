/*
 * Copyright (c) 2016 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "mbed.h"

#define MAC_ADDRESS_LEN 6

static const char     DEVICE_NAME[] = "Beetle-IoT-Blinky";
static uint8_t        mac_address[MAC_ADDRESS_LEN];
static char           *version;

DigitalOut led(D9);

/*
 * Display the Beetle information on the serial port
 */
void displayDeviceInfo(void)
{
    /* Get System Version */
    version = (char *)SystemCoreGetVersion();
    /* Get Mac Address */
    __System_Config_GetBDAddr(mac_address, MAC_ADDRESS_LEN);

    /* Print the information */
    printf("%s\n", version);
    printf("Device Name: %s\n", DEVICE_NAME);
    printf("MAC Address: %x:%x:%x:%x:%x:%x\n", mac_address[5],
            mac_address[4],
            mac_address[3],
            mac_address[2],
            mac_address[1],
            mac_address[0]);
    printf("==================\n");
    printf("Welcome to MBED-OS\n");
}

int main() {
    displayDeviceInfo();

    printf("Beetle Blinky Application\n");

    while(1) {
        led = !led;
        wait_ms(100);
    }

    return 0;
}
