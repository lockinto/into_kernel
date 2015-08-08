/* 
* @Author: into9
* @Date:   2015-08-07 10:50:41
* @Last Modified by:   into9
* @Last Modified time: 2015-08-08 11:09:58
*/
#include "../include/common.h"

inline void outb(uint16_t port, uint8_t value)
{
		asm volatile ("outb %1, %0" : : "dN" (port), "a" (value));
}

inline uint8_t inb(uint16_t port)
{
		uint8_t ret;
		asm volatile ("inb %1, %0" : "=a" (ret) : "dN" (port));
		return ret;
}

inline uint16_t inw(uint16_t port)
{
	uint16_t ret;
	asm volatile ("inw %1, %0" : "=a" (ret) : "dN" (port));
	return ret;
}