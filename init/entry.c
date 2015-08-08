/* 
* @Author: into9
* @Date:   2015-08-06 22:35:17
* @Last Modified by:   into9
* @Last Modified time: 2015-08-08 11:09:54
*/
#include "console.h"

int kern_entry()
{
	console_clear();
	console_write_color("Hello,os kernel!\nWelcome to my OS!\nHava a good day!\n",rc_black, rc_red);

	return 0;
}