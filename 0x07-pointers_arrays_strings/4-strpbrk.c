#include "holberton.h"
#include <stdio.h>

/**
* *_strpbrk - searches a string for any of a set of bytes
* @s: a string
* @accept: characters accepted
* Return: r
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j, n;
	char *r;

	r = NULL;
	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (n == 1)
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				r = &(s[i]);
				n = 1;
				break;
			}
		}
	}
	return (r);
}
