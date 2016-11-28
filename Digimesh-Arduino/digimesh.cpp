#include "digimesh.h"

SoftwareSerial radioSerial;

radioInit(uint8_t tx, uint8_t rx, uint64_t* address)
{
	radioSerial(tx, rx);
}

sendAT(uint16_t commandType, uint8_t* params, uint8_t param_len);
{
	uint8_t newFrame[BUF_LEN];
	
	newFrame[0] = START_DELIM;
	
	newFrame[3] = AT_COMMAND;
}


