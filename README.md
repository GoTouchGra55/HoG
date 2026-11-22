# HoG FC
This is my first dedicated drone flight computer. It may appear a bit odd because of the lack of an esc pcb on most commercial FCs. Mine is supposed to be used with high current external ones.

This repository includes the custom flight controller, a PDU, and a telemetry unit that is to be used in the drone.

![HoG](Assets/HoG.png)  
![Telemetry](Assets/Telemetry.png)

# Overviews

Hand of God flight controller is a custom STM32-based drone flight computer intended to be deployed for humanitarian aid missions.

I decided not to design an esc for cost optimization. (Also due to the fact that I'm not feeling that interested in designing an esc atm ;p)

See [FC Schematics](Kicad/FC/HoG.pdf)
See [Telemetry Schematics](Kicad/Telemetry/HoG_Telemetry.pdf)

## Routing

![HoG Routing](Assets/Routing.png)
![Telemetry Routing](Assets/Tel_Routing.png)

# Features

## Core

- STM32H743 Cortex-M7 MCU
- Up to 480 MHz CPU clock
- MicroSD storage
- SWD debugging
- USB-C
- Barometer
- Gyroscope & Accelerometer
- GPS/GNSS

## Power

The flight controller board provides dedicated:

- 22.2 V rail (6s nominal)
- 5 V rail
- 3.3 V rail

## Build Guide

Unless you want a _not so pleasant_ experience, I'd advise you to follow the order below:

1. Solder all SMD components first (MCU, IMU, passives)
2. Solder larger components (connectors, headers)
3. Verify power rails (5V, 3.3V) before powering MCU
4. Double-check polarity of capacitors and power input before powering the board. Otherwise you've made a fancy capacitor bomb :D
5. Flash firmware via ST-Link

## Firmware Flashing Instructions
### 1. Clone the repository
```bash
git clone git@github.com:GoTouchGra55/HoG.git
```

### 2. Open the project in a code editor
Navigate into the firmware directory. For VS Code users:
```bash
cd HoG/src
code .
```

### 3. Edit the code
You have all the freedom to implement your own new features. Infact, I encourage you to do so.
Just be sure to add your drivers to the `CMakeLists.txt` file or you'll be stuck with a nasty build error and wonder why your code won't work.
_(Speaking from experience)_

### 4. Build the firmware
```bash
cmake --preset Debug
cmake --build --preset Debug
```

### 5. Connect the ST-Link debugger
Connect the pins according to the silkscreen and the debugger labels.
Note: You can skip the 3.3V if your board is powered by an external power source.

### 6. Flash the firmware
With the ST-Link connected press the Debug button in VS Code.
Cortex-debug will launch the debugger and program the generated .elf file into the STM32's internal flash.
Once the firmware has been flashed, you can stop the debugging session.

### 7. Disconnect the ST-Link
You can now disconnect the ST-Link from the HoG board before testing operation.

The ST-Link is connected to the STM32's debug and reset circuitry. Leaving it connected can affect the NRST line and prevent the board from operating correctly when powered independently.

### 8. Power the board
Disconnect USB and power HoG from a suitable power source.
The STM32 should now boot directly from its internal flash and execute the newly flashed firmware.


## Rough BOM

| #   | Item           |        Cost | Supplier    |         Link |
| --- | -------------- | ----------: | ----------- |--------------|
| 1   | PCBs           |     $299.96 | JLCPCB      |[JLCPCB](https://jlcpcb.com/)
| 2   | SMD Resistors  |       ~$6.94~ $0 | Daraz Nepal |[Link](https://www.daraz.com.np/products/1500-pcs-smd-0603-resistors-assorted-set-60-values-x-25pcs-0ohm-10m-ohm-110-watt-1-high-precision-film-chip-resistance-kit-i1514216410-s12309713785.html?c=&channelLpJumpArgs=&clickTrackInfo=query%253Asmd%252Bresistors%253Bnid%253A1514216410%253Bsrc%253ALazadaMainSrp%253Brn%253Ac9682d867323cda46b1ca58a60ed35cf%253Bregion%253Anp%253Bsku%253A1514216410_NP%253Bprice%253A1027%253Bclient%253Adesktop%253Bsupplier_id%253A900279168309%253Bsession_id%253A%253Bbiz_source%253Ahttps%253A%252F%252Fwww.daraz.com.np%252F%253Bslot%253A29%253Butlog_bucket_id%253A470687%253Basc_category_id%253A10000489%253Bitem_id%253A1514216410%253Bsku_id%253A12309713785%253Bshop_id%253A198893%253BtemplateInfo%253A&configId=choice_NP_promotion&freeshipping=0&fs_ab=1&fuse_fs=&lang=en&location=Overseas&price=1027&priceCompare=skuId%3A12309713785%3Bsource%3Alazada-search-voucher%3Bsn%3Ac9682d867323cda46b1ca58a60ed35cf%3BoriginPrice%3A102700%3BdisplayPrice%3A102700%3BisGray%3Afalse%3BsinglePromotionId%3A-1%3BsingleToolCode%3AmockedSalePrice%3BvoucherPricePlugin%3A0%3Btimestamp%3A1795232346799&ratingscore=&request_id=c9682d867323cda46b1ca58a60ed35cf&review=&sale=0&search=1&source=search&spm=a211g0.searchlist.list.29&stock=1&upItemIds=1514216410)    |
| 3   | SMD Capacitors |       ~$6.64~ $0 | Daraz Nepal |[Link](https://www.daraz.com.np/products/320pcs-720pcs-2500pcs-0603-0805-1206-smd-capacitor-kit-assorted-kit-163650values-pumudsy-1pf-1uf-i492412636-s2210944926.html)    |
|     | **Total**      | **$299.96** |             |             |

![JLC](Assets/JLC.png)

# Author

Shaurya Tamang   
Contact: [E-mail](shauryatamang.dev@gmail.com)
