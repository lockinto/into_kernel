/*
* @Author: into9
* @Date:   2015-08-07 10:46:01
* @Last Modified by:   into9
* @Last Modified time: 2015-08-08 11:48:36
*/

#ifndef INCLUDE_COMMON_H_
#define INCLUDE_COMMON_H_

#include "types.h"

void outb(uint16_t port, uint8_t value);

uint8_t inb(uint16_t port);

uint16_t inw(uint16_t port);

#endif
