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

	if (d == NULL)
	{
		exit(0);
	}
	if ((*d).name != NULL)
	{
		printf("Name: %s\n", (*d).name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	if ((*d).age != 0)
	{
		printf("Age: %f\n", (*d).age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	if ((*d).owner != NULL)
	{
		printf("Owner: %s\n", (*d).owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
