#include "holberton.h"
#include <stdio.h>

/**
 * function - main function
 * @n: parameter
 * Return: 0 when it works
 */


void main(void)
{
	int i, j, r;
	
	j = 0;
	r = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 47 && s[i] <= 58)
		{
			if ( r > 0)
			{
				r = r * 10 + (s[i] - '0');
			}
			else
			{
				r = (s[i] - '0');
			}
		}
		else
		{
			s[j] = '\0';
		}
		
	}
	printf("%d", r);
}
