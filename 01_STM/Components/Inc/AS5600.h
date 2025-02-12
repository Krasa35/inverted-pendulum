/*
 * AS5600.h
 *
 *  Created on: Jan 14, 2024
 *      Author: Kurus
 */

#ifndef INC_AS5600_H_
#define INC_AS5600_H_

// Include necessary libraries and header files
#include "stdint.h"
#include "i2c.h"

// Define AS5600 device address
#define _AS5600_ADDRESS 0x36

// Define addresses of AS5600 registers
#define _ZMCO 0x00
#define _ZPOS 0x01
#define _MPOS 0x03
#define _MANG 0x05
#define _CONF 0x07
#define _RAW_ANGLE 0x0C
#define _ANGLE 0x0E
#define _STATUS 0x0B
#define _AGC 0x1A
#define _MAGNITUDE 0x01B

// Define maximum delay for AS5600 operations
#define AS5600_MAX_DELAY 200

// Structure for AS5600 handle
typedef struct {
    uint8_t    ADDRESS;
    uint8_t    ZMCO;
    uint8_t    ZPOS1;
    uint8_t    ZPOS2;
    uint8_t    MPOS1;
    uint8_t    MPOS2;
    uint8_t    MANG1;
    uint8_t    MANG2;
    uint8_t    CONF1;
    uint8_t    CONF2;
    uint8_t    RAW_ANGLE1;
    uint8_t    RAW_ANGLE2;
    uint8_t    ANGLE1;
    uint8_t    ANGLE2;
    uint8_t    STATUS;
    uint8_t    AGC;
    uint8_t    MAGNITUDE1;
    uint8_t    MAGNITUDE2;
    uint8_t    magnes_distance;
    float      angle;
} _AS5600_handle;

// Function prototypes
HAL_StatusTypeDef AS5600_Angle(_AS5600_handle* encoder);
HAL_StatusTypeDef AS5600_Magnes_Distance(_AS5600_handle* encoder);

#endif /* INC_AS5600_H_ */
