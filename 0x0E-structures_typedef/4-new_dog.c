#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * dog_t *new_dog - new dog declaration
 * @name: a dog name
 * @age: a dog age
 * @owner: a dog owner
 * Return: return a dog
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	char *name1, *owner1;
	float age1;

	if (name != '\0')
	{
		name1 = name;
		i++;
	}
	if (owner != '\0')
	{
		owner1 = owner;
		i++;
	}
	if (age != 0)
	{
		age1 = age;
		j++;
	}

	struct dog *dog1;

	dog1 = malloc(sizeof(char *) * i + sizeof(float) * j);

	if (dog1 == NULL)
	{
		return (NULL);
	}
	(*dog1).name = name1;
	(*dog1).age = age1;
	(*dog1).owner = owner1;

	return (dog1);
}
