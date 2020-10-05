#include "holberton.h"

/**
* _strspn - length of a prefix substring
* @s: a char*
* @accept: characters accepted
* Return: n
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i, j, m;

	n = 0;
	m = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (m == 4)
		{
			break;
		}
		else
		{
			m = 0;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
			}
			else
			{
				m++;
			}
		}
	}
	return (n);
}
