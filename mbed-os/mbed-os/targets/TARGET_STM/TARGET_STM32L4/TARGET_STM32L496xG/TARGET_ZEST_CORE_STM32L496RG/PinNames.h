/* mbed Microcontroller Library
 *******************************************************************************
 * Copyright (c) 2016, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "PinNamesTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PA_0  = 0x00,
    PA_1  = 0x01,
    PA_2  = 0x02,
    PA_3  = 0x03,
    PA_4  = 0x04,
    PA_5  = 0x05,
    PA_6  = 0x06,
    PA_7  = 0x07,
    PA_8  = 0x08,
    PA_9  = 0x09,
    PA_10 = 0x0A,
    PA_11 = 0x0B,
    PA_12 = 0x0C,
    PA_13 = 0x0D,
    PA_14 = 0x0E,
    PA_15 = 0x0F,

    PB_0  = 0x10,
    PB_1  = 0x11,
    PB_2  = 0x12,
    PB_3  = 0x13,
    PB_4  = 0x14,
    PB_5  = 0x15,
    PB_6  = 0x16,
    PB_7  = 0x17,
    PB_8  = 0x18,
    PB_9  = 0x19,
    PB_10 = 0x1A,
    PB_11 = 0x1B,
    PB_12 = 0x1C,
    PB_13 = 0x1D,
    PB_14 = 0x1E,
    PB_15 = 0x1F,

    PC_0  = 0x20,
    PC_1  = 0x21,
    PC_2  = 0x22,
    PC_3  = 0x23,
    PC_4  = 0x24,
    PC_5  = 0x25,
    PC_6  = 0x26,
    PC_7  = 0x27,
    PC_8  = 0x28,
    PC_9  = 0x29,
    PC_10 = 0x2A,
    PC_11 = 0x2B,
    PC_12 = 0x2C,
    PC_13 = 0x2D,
    PC_14 = 0x2E,
    PC_15 = 0x2F,

    PD_2  = 0x32,

    PH_0  = 0x70,
    PH_1  = 0x71,
	PH_2  = 0x72,
	PH_3  = 0x73,

    // ADC internal channels
    ADC_TEMP = 0xF0,
    ADC_VREF = 0xF1,
    ADC_VBAT = 0xF2,

    // Arduino connector namings
    A0          = PC_2,
    A1          = PC_3,
    A2          = PA_1,
    A3          = PC_4,
    A4          = PC_1,
    A5          = PC_0,
    D0          = PA_3,
    D1          = PA_2,
    D2          = PC_5,
    D3          = PA_0,
    D4          = PC_8,
    D5          = PC_7,
    D6          = PB_6,
    D7          = PB_7,
    D8          = PA_8,
    D9          = PB_1,
    D10         = PB_0,
    D11         = PA_7,
    D12         = PA_6,
    D13         = PA_5,
    D14         = PC_1,
    D15         = PC_0,

    // Zest connector signal namings (J1)
    CAN1_RX     = PB_8,
    CAN1_TX     = PB_9,
    I2C1_SCL    = PC_0,
    I2C1_SDA    = PC_1,
    UART1_RX    = PA_3,
    UART1_TX    = PA_2,
    SPI1_MOSI   = PA_7,
    SPI1_MISO   = PA_6,
    SPI1_SCK    = PA_5,
    SPI1_CS     = PB_0,
    PWM1_OUT    = PB_1,
    PWM2_OUT    = PB_6,
    PWM3_OUT    = PC_7,
    ICAPT1      = PA_8,
    WKUP        = PC_13,
    DIO1        = PA_0,
    DIO2        = PB_7,
    DIO3        = PC_8,
    DIO4        = PC_5,
    ADC_IN1     = PC_2,
    ADC_IN2     = PC_3,
    ADC_IN3     = PA_1,
    ADC_IN4     = PC_4,
    DAC_OUT1    = PA_4,

    // On board signal namings
    // USB signals
    USB_DP      = PA_12,
    USB_DM      = PA_11,

    // User I/Os
    USER_LED    = PB_11,
    USER_BUTTON = PH_3,

    // Generic signals namings
    LED1        = USER_LED,
    LED2        = USER_LED,
    LED3        = USER_LED,
    LED4        = USER_LED,
    BUTTON1     = USER_BUTTON,
    SERIAL_TX   = PC_10,
    SERIAL_RX   = PC_11,
    USBTX       = PC_10,
    USBRX       = PC_11,
    I2C_SCL     = I2C1_SCL,
    I2C_SDA     = I2C1_SDA,
    SPI_MOSI    = SPI1_MOSI,
    SPI_MISO    = SPI1_MISO,
    SPI_SCK     = SPI1_SCK,
    SPI_CS      = SPI1_CS,
    PWM_OUT     = PWM1_OUT,

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

#ifdef __cplusplus
}
#endif

#endif