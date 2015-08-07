#include "console.h"

int kern_entry()
{
	console_clear();
	console_write_color("Hello,os kernel!\nWelcome to my OS!\nHava a good day!\n",rc_black, rc_red);

	return 0;
}