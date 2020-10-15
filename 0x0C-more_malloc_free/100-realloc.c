#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	ptr = malloc(old_size + new_size - old_size);
	
	return (ptr);
}
