#include "holberton.h"
#include <stdio.h>
/**
* *_strchr - locates a character in a string
* @s: string
* @c: a character
* Return: r
*/

char *_strchr(char *s, char c)
{
	int i, n;
	char *r;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] ==  c)
		{
			r = &s[i];
			n ++;
			break;
		}
	}
	if (n == 0)
	{
		return (s);
	}
	return (r);
}
