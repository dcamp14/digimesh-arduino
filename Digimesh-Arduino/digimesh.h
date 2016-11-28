#include "Arduino.h"
#include "SoftwareSerial.h"
#include <stdint.h>

#define START_DELIM (0x7E)

// Frame Types
#define AT_COMMAND  (0x08)
#define TRANSMIT    (0x10)
#define AT_RESPONSE (0x88)

// AT Commands
#define ND (0x4E44)

#define BUF_LEN (64)

// Frame Data Structure

typedef struct
{
	uint8_t  length;
	uint8_t  frameType;
	uint8_t* frameData;
	uint8_t  checkSum;
} radioFrame_t;


typedef struct
{
	uint64_t address;
	uint8_t tx_pin;
	uint8_t rx_pin;
} digiRadio_t;
