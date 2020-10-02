#include "holberton.h"

/**
* *rot13 - rotate alpha 13 positions
* @s: a *char
* Return: s
*/

char *rot13(char *s)
{
	int i, j;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotate[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rotate[j];
				break;
			}
		}
	}
	return (s);
}
