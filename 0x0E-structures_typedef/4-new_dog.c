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

	char *name1 = name;
	char *owner1 = owner;
	float age1 = age;

	struct dog *dog1;

	dog1 = malloc(sizeof(struct dog));

	if (dog1 == NULL)
	{
		return (NULL);
	}
	(*dog1).name = name1;
	(*dog1).age = age1;
	(*dog1).owner = owner1;

	return (dog1);
}
