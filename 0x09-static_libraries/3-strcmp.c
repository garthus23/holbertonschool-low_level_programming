#include "holberton.h"

/**
* main - main function
* @n: integer
* Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	int i, r;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else if (s1[i] > s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = 0;
		}
	}
	return (r);
}
