#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define USB_VID 0x303a
#define USB_PID 0x1001

#define EXTERNAL_NUM_INTERRUPTS 46
#define NUM_DIGITAL_PINS        48
#define NUM_ANALOG_INPUTS       20

// All Pins are defined in the Application e.g devices.h

//Some Arduino Drivers need Pins Defined here
static const uint8_t SS    = 0;
static const uint8_t MOSI  = 0;
static const uint8_t MISO  = 0;
static const uint8_t SCK   = 0;

static const uint8_t SDA = 16;
static const uint8_t SCL = 15;

#endif /* Pins_Arduino_h */
