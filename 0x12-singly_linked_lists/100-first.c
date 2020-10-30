#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * __attribute__ - execute some code before main
 *
 **/


void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

