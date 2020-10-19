#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{

	char *name1 = name;
	char *owner1 = owner;
	float age1 = age;

	struct dog new_dog;
	(*new_dog).name = name1;
	(*new_dog).age = age1;
	(*new_dog).owner = owner1;
	return (*new_dog);
}
