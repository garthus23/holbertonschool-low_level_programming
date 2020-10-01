#include "holberton.h"

/**
* *cap_string - capitalizes all words of a string.
* @s: string
* Return: s
*/

char *cap_string(char *s)
{
	int i;

	if (s[0] > 96 && s[0] < 123)
	{
		s[0] = s[0] - 32;
	}
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			if (s[i - 1] == 9 || s[i - 1] == 32 || s[i - 1] == 10)
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == 44 || s[i - 1] == 59 || s[i - 1] == 46)
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == 33 || s[i - 1] == 63 || s[i - 1] == 34)
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == 40 || s[i - 1] == 41 || s[i - 1] == 123)
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == 125)
			{
				s[i] = s[i] - 32;
			}

		}
	}
	return (s);
}
