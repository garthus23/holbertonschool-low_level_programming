#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * str_len_plus1 - length of the char, include null char
 * @s: a char
 * Return: return an int
 **/


int str_len_plus1(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i++;
	return (i);
}

/**
 * *cp_string - copy a string
 * @t: string temp
 * @f: string final
 * Return: f a pointer
 **/


char *cp_string(char *t, char *f)
{
	int i;

	for (i = 0; t[i] != '\0'; i++)
	{
		f[i] = t[i];
	}
	f[i] = '\0';

	return (f);
}


/**
 * dog_t *new_dog - new dog declaration
 * @name: a dog name
 * @age: a dog age
 * @owner: a dog owner
 * Return: return a dog
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name1;
	char *owner1;
	float age1 = age;

	struct dog *dog1;

	dog1 = malloc(sizeof(struct dog));

	if (dog1 == NULL)
	{
		return (NULL);
	}

	name1 = malloc(sizeof(char) * str_len_plus1(name));
	if (!name1)
	{
		free(dog1);
		return (NULL);
	}
	cp_string(name, name1);
	(*dog1).name = name1;
	(*dog1).age = age1;

	owner1 = malloc(sizeof(char) * str_len_plus1(owner));
	if (!owner1)
	{
		free(dog1);
		free(name1);
		return (NULL);
	}
	cp_string(owner, owner1);
	(*dog1).owner = owner1;

	return (dog1);
}
