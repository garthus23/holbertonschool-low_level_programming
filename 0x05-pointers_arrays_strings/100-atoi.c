#include "holberton.h"

/**
 * _atoi - string to int
 * @s: a string
 * Return: 0 when it works
 */

int _atoi(char *s)
{
	int i, r, n;

	n = 0;
	r = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			n--;
		}
		else if (s[i] == '+')
		{
			n++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (r != 0)
			{
				r = r * 10 + (s[i] - '0');
			}
			else
			{
				r = (s[i] - '0');
			}
			if ((s[i + 1] < 48) || (s[i + 1] > 57))
			{
				break;
			}
		}
	}
	if (n < 0)
	{
		r = -r;
	}
	return (r);
}
