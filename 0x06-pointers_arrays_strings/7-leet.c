#include "holberton.h"
#include <stdio.h>

/**
* *leet - main function
* @s: integer
* Return: s
*/

char *leet(char *s)
{
	int i, j;
	char minus[6] = "aelot";
	char maju[6] = "AELOT";
	char numb[6] = "43107";

	
	printf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; minus[j] != '\0'; j++)
		{
			if (s[i] == minus[j] || s[i] == maju[j])
			{
				s[i] = numb[j];
			}
		}	
	}
	return (s);
}
