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

	struct dog *dog;

	dog = malloc(sizeof(struct dog));

	if (dog == NULL)
	{
		return (NULL);
	}
	(*dog).name = name1;
	(*dog).age = age1;
	(*dog).owner = owner1;

	return (dog);
}
