# ScioSense AS6031 STM32L476RG Library
STM32L476RG library for the AS6031 Ultrasonic Flow Converter.

<img src="_images/AS6031_3D.png" width="1000">

AS6031 is an ultrasonic flow converter for the next generation of ultrasonic water and heat meters.
The AS6031 converter produced by [ScioSense](http://www.sciosense.com).
It comes in the size QFN48 package with digital SPI interface.
This enables new use cases in single-chip solution provided ready flow information, system design
compatible with mechanical meters, high flexibility in choice for external μP handling communication
and further data management, precision down to low flow rates and leakage detection.

## Links
* [Datasheet](https://www.sciosense.com/wp-content/uploads/documents/AS6031-Datasheet-1.pdf)
* [Application notes](https://www.sciosense.com/products/ultrasonic-flow-converters/as6031/#documents)
* Buy the AS6031 on [Mouser](https://www2.mouser.com/ProductDetail/ScioSense/AS6031-BQFM?qs=DPoM0jnrROWSi1b8OH79RQ%3D%3D) or [Digikey](https://www.digikey.com/en/products/detail/sciosense/as6031-bqfm/17282629)
* Buy the AS6031 evaluation kit on [Mouser](https://www2.mouser.com/ProductDetail/ScioSense/AS6031-QF_DK?qs=DPoM0jnrROUiGEZop9BCng%3D%3D)
* [Further information about the AS6031](https://www.sciosense.com/products/ultrasonic-flow-converters/as6031/)  

 
## Prerequisites
It is assumed that
 - The STM32CubeIDE has been installed.
   If not, refer to "Install the STM32CubeIDE" on the
   [ST site](https://www.st.com/en/development-tools/stm32cubeide.html#overview).
 - The STM32CubeMX has been installed.
   If not, refer to "Install the STM32CubeMX" on the
   [ST site](https://www.st.com/en/development-tools/stm32cubemx.html).
 - The STM32CubeProgrammer could been installed, optionally.
   If not, refer to "Install the STM32CubeProgrammer" on the
   [ST site](https://www.st.com/en/development-tools/stm32cubeprog.html).
 - The STM32CubeMonitor could been installed, optionally.
   If not, refer to "Install the STM32CubeMonitor" on the
   [ST site](https://www.st.com/en/development-tools/stm32cubemonitor.html).
   
- The STM32CubeL4GettingStarted document is at its default location. Normally this is `C:\Users\[your_username]\STM32Cube\Repository\STM32Cube_FW_L4_xx.yy.z\Documentation`.

You might need to add your board to the STM32CubeIDE. This library was tested with the [STM32 Nucleo-64 development board with STM32L476RG MCU](https://www.st.com/en/evaluation-tools/nucleo-l476rg.html#overview)
(https://www.st.com/en/microcontrollers-microprocessors/stm32l476rg.html). 
For the installation of the STM32L476RG in the STM32CubeIDE, see [STM32L476RG Installation](https://www.st.com/en/development-tools/stm32cubemx.html#documentation)


## Installation

### Manual installation
- Download the code from this repository via "Download ZIP".
- In STM32CubeIDE, select Import > General > Existing Projects into Workspace... and browse to the just unpacked ZIP file.
- if needed, include Source Library, select Oüen Properties > C/C++ General > Code Analysis > Paths and Symbols
  Includes > Add include directories > ../../_Src_Lib
  Move this directory up to the second place.
- When the IDE is ready this README.md should be located in your workspace.


## Wiring

### General
Please make sure that you use the correct supply voltage:
- The AS6031 runs at VDD = 2.1V(3.0V) to 3.6V. If you are using the Sciosense AS6031 breakout board, you can use VDD = 3.3 V thanks
to the onboard LDO. 
- The SPI communication is 3.3 V tolerant.

### Example with STM32L476RG (SPI)
This example shows how to wire a [NUCLEO-L476RG](https://www.st.com/en/evaluation-tools/nucleo-l476rg.html#documentation) 
with the AS6031 breakout board for SPI communication.

| AS6031 breakout board | STM32L476RG |
|:---------------------:|:-----------:|
|          VDD          |     3V3     |
|          GND          |     GND     |
|          SCK          |     PA5     |
|          MISO         |     PA6     |
|          MOSI         |     PA7     |
|          SSN          |     PB6     |
|          INTN         |     PA9     |

<img src="_images/spi_pinout_stm32.png" width="1000">

### Example with STM32L476RG (AS6031 Nucleo Shield)
This example shows how to use a [NUCLEO-L476RG](https://www.st.com/en/evaluation-tools/nucleo-l476rg.html#documentation) 
with the AS6031 Nucleo Shield for SPI communication.

<img src="_images/STM32_AS6031_NS.png" width="1000">

### Interrupt functionality
To use the AS6031's interrupt functionality connect the interrupt pin of the AS6031 to a GPIO pin of your STM32L476RG. The 
interrupt pin uses VDD.


## Build an example
To build a sample code
 - Clean Project
 - Index > Rebuild
 - Depending on the microcontroller, the pin assignment must be verified again.
 - Build Project

## Contributing
Contributions in the form of issue opening or creating pull requests are very welcome!
