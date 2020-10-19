#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: Dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);