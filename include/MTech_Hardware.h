#pragma once
#include <Arduino.h>


/* #################################################################################
 *
 * Section: General Hardware Definitions
 * OpenKNXiao RP2040 / Rp2350 / ESP / ESP32-S3-Plus
 * 
 * ################################################################################# */
//
#if defined(OKNXHW_OPENKNXIAO_RP2040)
    // XIAO RP2040 Pin Definitions
    #define OKNXHW_OPENKNXIAO_D0  26 // GPIO26 | SPI1 SCK  | UART1 CTS | I2C1 SDA | PWM5 A
    #define OKNXHW_OPENKNXIAO_D1  27 // GPIO27 | SPI1 TX   | UART1 RTS | I2C1 SCL | PWM5 B
    #define OKNXHW_OPENKNXIAO_D2  28 // GPIO28 | SPI1 RX   | UART0 TX  | I2C0 SDA | PWM6 A
    #define OKNXHW_OPENKNXIAO_D3  29 // GPIO29 | SPI1 CSn  | UART0 RX  | I2C0 SCL | PWM6 B
    #define OKNXHW_OPENKNXIAO_D4  6  // GPIO6  | SPI0 SCK  | UART1 CTS | I2C1 SDA | PWM3 A
    #define OKNXHW_OPENKNXIAO_D5  7  // GPIO7  | SPI0 TX   | UART1 RTS | I2C1 SCL | PWM3 B
    #define OKNXHW_OPENKNXIAO_D6  0  // GPIO0  | SPI0 RX   | UART0 TX  | I2C0 SDA | PWM0 A
    #define OKNXHW_OPENKNXIAO_D7  1  // GPIO1  | SPI0 CSn  | UART0 RX  | I2C0 SCL | PWM0 B
    #define OKNXHW_OPENKNXIAO_D8  2  // GPIO2  | SPI0 SCK  | UART0 CTS | I2C1 SDA | PWM1 A
    #define OKNXHW_OPENKNXIAO_D9  4  // GPIO4  | SPI0 RX   | UART1 TX  | I2C0 SDA | PWM2 A
    #define OKNXHW_OPENKNXIAO_D10 3  // GPIO3  | SPI0 TX   | UART0 RTS | I2C1 SCL | PWM1 B

    #define OKNXHW_OPENKNXIAO_LED_1_GREEN 16 // Build-In LED GREEN
    #define OKNXHW_OPENKNXIAO_LED_1_RED   17 // Build-In LED RED
    #define OKNXHW_OPENKNXIAO_LED_1_BLUE  25 // Build-In LED BLUE

    #define OKNXHW_OPENKNXIAO_NEOPIXEL_PWR 11 // Build-In NeoPixel Power Pin
    #define OKNXHW_OPENKNXIAO_NEOPIXEL 12   // Build-In NeoPixel Pin

#elif defined(OKNXHW_OPENKNXIAO_RP2350)
    // XIAO RP2350 Pin Definitions
    #define OKNXHW_OPENKNXIAO_D0  26 // GPIO26 | SPI1 SCK  | UART1 CTS | I2C1 SDA | PWM5 A
    #define OKNXHW_OPENKNXIAO_D1  27 // GPIO27 | SPI1 TX   | UART1 RTS | I2C1 SCL | PWM5 B
    #define OKNXHW_OPENKNXIAO_D2  28 // GPIO28 | SPI1 RX   | UART0 TX  | I2C0 SDA | PWM6 A
    #define OKNXHW_OPENKNXIAO_D3  5  // GPIO5  | SPI0 CSn  | UART1 RX  | I2C0 SDA | PWM2 B
    #define OKNXHW_OPENKNXIAO_D4  6  // GPIO6  | SPI0 SCK  | UART1 CTS | I2C1 SDA | PWM3 A
    #define OKNXHW_OPENKNXIAO_D5  7  // GPIO7  | SPI0 TX   | UART1 RTS | I2C1 SCL | PWM3 B
    #define OKNXHW_OPENKNXIAO_D6  0  // GPIO0  | SPI0 RX   | UART0 TX  | I2C0 SDA | PWM0 A
    #define OKNXHW_OPENKNXIAO_D7  1  // GPIO1  | SPI0 CSn  | UART0 RX  | I2C0 SCL | PWM0 B
    #define OKNXHW_OPENKNXIAO_D8  2  // GPIO2  | SPI0 SCK  | UART0 CTS | I2C1 SDA | PWM1 A
    #define OKNXHW_OPENKNXIAO_D9  4  // GPIO4  | SPI0 RX   | UART1 TX  | I2C0 SDA | PWM2 A
    #define OKNXHW_OPENKNXIAO_D10 3  // GPIO3  | SPI0 TX   | UART0 RTS | I2C1 SCL | PWM1 B
    
    #define OKNXHW_OPENKNXIAO_LED_1_GREEN -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_RED   -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_BLUE  -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_YELLOW 25 // Build-In LED YELLOW

    #define OKNXHW_OPENKNXIAO_NEOPIXEL_PWR 23 // Build-In NeoPixel Power Pin
    #define OKNXHW_OPENKNXIAO_NEOPIXEL 22    // Build-In NeoPixel Pin

#elif defined(OKNXHW_OPENKNXIAO_ESP32S3) || defined(OKNXHW_OPENKNXIAO_ESP32S3_PLUS)
    // XIAO ESP32-S3 Plus Pin Definitions
    #define OKNXHW_OPENKNXIAO_D0  1 
    #define OKNXHW_OPENKNXIAO_D1  2
    #define OKNXHW_OPENKNXIAO_D2  3
    #define OKNXHW_OPENKNXIAO_D3  4
    #define OKNXHW_OPENKNXIAO_D4  5
    #define OKNXHW_OPENKNXIAO_D5  6
    #define OKNXHW_OPENKNXIAO_D6  43
    #define OKNXHW_OPENKNXIAO_D7  44
    #define OKNXHW_OPENKNXIAO_D8  7
    #define OKNXHW_OPENKNXIAO_D9  8
    #define OKNXHW_OPENKNXIAO_D10 9
    #define OKNXHW_OPENKNXIAO_D11 42
    #define OKNXHW_OPENKNXIAO_D12 41

    #define OKNXHW_OPENKNXIAO_LED_1_GREEN -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_RED   -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_BLUE  -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_YELLOW 21 // Build-In LED YELLOW

    #define OKNXHW_OPENKNXIAO_NEOPIXEL_PWR -1 // N/A
    #define OKNXHW_OPENKNXIAO_NEOPIXEL -1   // N/A
#elif defined(OKNXHW_OPENKNXIAO_ESP32C3)
    // XIAO ESP32-C3 Pin Definitions
    #define OKNXHW_OPENKNXIAO_D0  2
    #define OKNXHW_OPENKNXIAO_D1  3
    #define OKNXHW_OPENKNXIAO_D2  4
    #define OKNXHW_OPENKNXIAO_D3  5
    #define OKNXHW_OPENKNXIAO_D4  6   // SDA
    #define OKNXHW_OPENKNXIAO_D5  7   // SCL
    #define OKNXHW_OPENKNXIAO_D6  21  // TX
    #define OKNXHW_OPENKNXIAO_D7  20  // RX
    #define OKNXHW_OPENKNXIAO_D8  8
    #define OKNXHW_OPENKNXIAO_D9  9
    #define OKNXHW_OPENKNXIAO_D10 10

    #define OKNXHW_OPENKNXIAO_NO_USER_LED  -1
    #define OKNXHW_OPENKNXIAO_LED_1_GREEN -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_RED   -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_BLUE  -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_YELLOW 21 // Build-In LED YELLOW

    #define OKNXHW_OPENKNXIAO_NEOPIXEL_PWR -1 // N/A
    #define OKNXHW_OPENKNXIAO_NEOPIXEL -1   // N/A
#elif defined(OKNXHW_OPENKNXIAO_ESP32C5)
    // XIAO ESP32-C5 Pin Definitions
    #define OKNXHW_OPENKNXIAO_D0  1
    #define OKNXHW_OPENKNXIAO_D1  0
    #define OKNXHW_OPENKNXIAO_D2  25
    #define OKNXHW_OPENKNXIAO_D3  7
    #define OKNXHW_OPENKNXIAO_D4  23
    #define OKNXHW_OPENKNXIAO_D5  24
    #define OKNXHW_OPENKNXIAO_D6  11
    #define OKNXHW_OPENKNXIAO_D7  12
    #define OKNXHW_OPENKNXIAO_D8  8
    #define OKNXHW_OPENKNXIAO_D9  9
    #define OKNXHW_OPENKNXIAO_D10 10

    #define OKNXHW_OPENKNXIAO_NO_USER_LED  -1
    #define OKNXHW_OPENKNXIAO_LED_1_GREEN -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_RED   -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_BLUE  -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_YELLOW 27 // Build-In User LED YELLOW

    #define OKNXHW_OPENKNXIAO_NEOPIXEL_PWR -1 // N/A
    #define OKNXHW_OPENKNXIAO_NEOPIXEL -1   // N/A
#elif defined(OKNXHW_OPENKNXIAO_ESP32C6)
    // XIAO ESP32-C6 Pin Definitions
    #define OKNXHW_OPENKNXIAO_D0  0
    #define OKNXHW_OPENKNXIAO_D1  1
    #define OKNXHW_OPENKNXIAO_D2  2
    #define OKNXHW_OPENKNXIAO_D3  21
    #define OKNXHW_OPENKNXIAO_D4  22  // SDA
    #define OKNXHW_OPENKNXIAO_D5  23  // SCL
    #define OKNXHW_OPENKNXIAO_D6  16  // TX
    #define OKNXHW_OPENKNXIAO_D7  17  // RX
    #define OKNXHW_OPENKNXIAO_D8  19  // CLK
    #define OKNXHW_OPENKNXIAO_D9  20
    #define OKNXHW_OPENKNXIAO_D10 18

    #define OKNXHW_OPENKNXIAO_NO_USER_LED  -1
    #define OKNXHW_OPENKNXIAO_LED_1_GREEN -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_RED   -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_BLUE  -1 // N/A
    #define OKNXHW_OPENKNXIAO_LED_1_YELLOW 15 // Build-In User LED YELLOW

    #define OKNXHW_OPENKNXIAO_NEOPIXEL_PWR -1 // N/A
    #define OKNXHW_OPENKNXIAO_NEOPIXEL -1   // N/A

    // ============================================================
    // RF Switch Configuration - XIAO ESP32-C6 (FM8625H)
    // ============================================================
    // Antenna Selection via RF Switch (U5 - FM8625H SP2T)
    //   RF1 = ANT1 = KH5220-A36 -> Onboard PCB Chip Antenna
    //   RF2 = ANT2 = U.FL-R-SMT-1 -> External U.FL Antenna Connector
    //
    // RF Switch Port Selection (VCTL -> GPIO14):
    //   LOW  (0) = RF1 -> Internal PCB Antenna (default)
    //   HIGH (1) = RF2 -> External U.FL Antenna
    //
    // RF Switch Power Control (Q3 LP0404N3T5G -> GPIO3/ADC1_CH3):
    //   LOW  (0) = RF Switch ON  (VDD supplied via MOSFET)
    //   HIGH (1) = RF Switch OFF (VDD disconnected)
    //
    // Note: Always enable power (GPIO3=LOW) before switching antenna!
    // ============================================================

    #define OKNXHW_OPENKNXIAO_RF_SWITCH_PIN 14 // RF Switch Port Select (LOW: RF1 internal, HIGH: RF2 external U.FL)
    #define OKNXHW_OPENKNXIAO_RF_POWER_PIN 3   // RF Switch Power Control (LOW: ON, HIGH: OFF) – GPIO3/ADC1_CH3
    
#else
    //#error "No OpenKNXiao RP2040 / Rp2350 / ESP32-S3/C3/C6  hardware version defined!"
#endif

#ifdef DEVICE_MT_XIAO_RP2040
    #define DEVICE_ID "MT_XIAO_RP2040"
    #define DEVICE_NAME "MTech XIAO RP2040 Platform"

    #define KNX_SERIAL Serial1
        #define KNX_UART_NUM (0)
    #define KNX_UART_RX_PIN (1)
    #define KNX_UART_TX_PIN (0)

    #define SAVE_INTERRUPT_PIN (6)

    #define PROG_LED_PIN (28)
    #define PROG_LED_PIN_ACTIVE_ON HIGH

    #define PROG_BUTTON_PIN (4)
    #define PROG_BUTTON_PIN_INTERRUPT_ON FALLING
#endif

#ifdef DEVICE_MT_XIAO_ESP32S3
    #define DEVICE_ID "MT_XIAO_ESP32S3"
    #define DEVICE_NAME "MTech XIAO ESP32S3 Platform"

    #define KNX_SERIAL Serial1
    #define KNX_UART_NUM (0)
    #define KNX_UART_RX_PIN (44)
    #define KNX_UART_TX_PIN (43)

    #define SAVE_INTERRUPT_PIN (5)

    #define PROG_LED_PIN (21)  // Build-In LED YELLOW
    #define PROG_LED_PIN_ACTIVE_ON HIGH

    #define PROG_BUTTON_PIN (0)  // GPIO0 is also BOOT button, but can be used as PROG_BUTTON with proper debounce and handling in code
    #define PROG_BUTTON_PIN_INTERRUPT_ON FALLING
#endif

#ifdef DEVICE_MT_XIAO_ESP32C3
    #define DEVICE_ID "MT_XIAO_ESP32C3"
    #define DEVICE_NAME "MTech XIAO ESP32C3 Platform"

    #define KNX_SERIAL Serial1
    #define KNX_UART_NUM (0)
    #define KNX_UART_RX_PIN (20)
    #define KNX_UART_TX_PIN (21)

    #define SAVE_INTERRUPT_PIN (5)

    #define PROG_LED_PIN (4)  // D2/GPIO4
    #define PROG_LED_PIN_ACTIVE_ON HIGH

    #define PROG_BUTTON_PIN (9)  // D9/GPIO9
    #define PROG_BUTTON_PIN_INTERRUPT_ON FALLING
#endif