/*
 * miscellaneous.h
 *
 *  Created on: Jan 13, 2024
 *      Author: kacpe
 */

#ifndef INC_MISCELLANEOUS_H_
#define INC_MISCELLANEOUS_H_

#include "init.h"

void send_uart (const char* string);
Menu_States processCommand(char *command);


#endif /* INC_MISCELLANEOUS_H_ */
