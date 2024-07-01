
# STM32-UART-Drivers
Bare-metal C code for transmitting data via UART from an STM32 microcontroller to a laptop.

## Table of Contents

1. [Overview](#overview)
2. [Hardware Requirements](#hardware-requirements)
3. [Software Requirements](#Software-requirements)
4. [Configuration](#Configuration)
5. [Code Description](#Code-description)
6. [Usage](#Usage)


## Overview

This project initializes the UART2 peripheral on an STM32F4 microcontroller and transmits a single character ('Y') continuously to a connected laptop.

Hardware requirements
STM32F4 microcontroller (e.g., STM32F401RE Nucleo board)
USB-to-serial adapter (if not using a development board with built-in USB-to-UART functionality)
Laptop with a serial terminal application (e.g., PuTTY, RealTerm)
Software Requirements
ARM GCC Toolchain
STM32CubeF4 (For CMSIS)
Serial terminal application (e.g., PuTTY, RealTerm)
