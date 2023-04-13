#ifndef DEALWITHMSG_H
#define DEALWITHMSG_H
#include "stm32f10x.h"
#include "J1939.H" 
#include "msg.h" 
#include "wifi_function.h"

void sendLD();
void readOneMessage(J1939_MESSAGE *J1939_MESSAGE);
//void CheckLCMD ( J1939_MESSAGE *J1939_MESSAGE,getLCMD_t *LCMD);
extern uint8_t LCMDneed[6];
#endif
