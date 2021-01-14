#include <stdio.h>

/**
 *  hash_djb2 - hash function to create a hash from a string
 * @str: a string
 * Return: a hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
/*
 *	printf("%s : %d\n", str, c);
 *	c = decimal value of the current letter
 */
	hash = ((hash << 5) + hash) + c;

/*
 *	for the first letter c:
 *	left shift of hash
 *	octal value from : 1010100000101 to : 101010000010100000
 *	decimal from 5381 to 172192
 *	hash = ((172192) + 5381) + 69
 */
	}
	return (hash);
}
