#include "holberton.h"

/**
* rev_string - reverse a string
* @s: string
* Return: nothing
*/

void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i = i - 1;
	j = 0;
	for (; i > j; i--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
	}
}
