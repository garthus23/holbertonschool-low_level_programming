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

	if (d != NULL)
	{
		if ((*d).name != '\0')
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", (*d).age);
		if ((*d).owner != '\0')
		{
			printf("Owner: %s\n", (*d).owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
