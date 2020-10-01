#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: r
 */

int _strcmp(char *s1, char *s2)
{
	int i, r;

	r = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			r = ((s1[i] - s2[i]));
			if (r > 0)
			{
				r = -r;
			}
			break;
		}

		if (s1[i] > s2[i])
		{
			r = ((s2[i] - s1[i]));
			if (r < 0)
			{
				r = -r;
			}
			break;
		}
	}
	return (r);
}
