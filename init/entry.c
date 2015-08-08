/*
* @Author: into9
* @Date:   2015-08-06 22:35:17
* @Last Modified by:   into9
* @Last Modified time: 2015-08-08 17:05:44
*/
#include "console.h"

int kern_entry()
{
	init_debug();

    console_clear();

    printk_color(rc_black, rc_green, "Hello, OS kernel!\n");

    panic("test");

    return 0;
}
