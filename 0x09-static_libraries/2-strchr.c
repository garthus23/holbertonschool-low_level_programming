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
	int i;
	char *r;

	r = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] ==  c)
		{
			r = &s[i];
			break;
		}
	}
	if (s[i] == '\0' && s[i] == c)
	{
		r = &s[i];
	}
	return (r);
}