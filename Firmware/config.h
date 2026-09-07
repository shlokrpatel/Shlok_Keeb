#pragma once

// OLED Driver configuration
#define OLED_DISPLAY_128X32

// RP2040 I2C Configuration for OLED (GP20 = SDA, GP21 = SCL)
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP20
#define I2C1_SCL_PIN GP21