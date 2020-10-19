#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: pointer on struct
 * Return: nothing
 **/

void print_dog(struct dog *d)
{

	if (d)
	{
		if ((*d).name)
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("Name: %p\n", (*d).name);
		}
		if ((*d).age)
		{
			printf("Age: %f\n", (*d).age);
		}
		else
		{
			printf("Age: %p\n", (&d).age);
		}
		if ((*d).owner)
		{
			printf("Owner: %s\n", (*d).owner);
		}
		else
		{
			printf("Owner: %p\n", (*d).owner);
		}
	}
}
