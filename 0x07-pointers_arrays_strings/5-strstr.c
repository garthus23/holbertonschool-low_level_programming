#include "holberton.h"
#include <stdio.h>

/**
* *_strstr - locates a substring
* @needle: a substring
* @haystack: string
* Return: r
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, len, l, n, t;
	char *r;

	len = 0;
	j = 0;
	for (i = 0; needle[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			l = i;
			for (j = 0; j != len; j++)
			{
				if (haystack[l] == needle[j])
				{
					l++;
					n++;
				}
				if (n == (len - 1))
				{
					r = &haystack[i];
					t = 12;
					break;
				}
			}
		}
		j = 0;
		n = 0;
		if (t == 12)
		{
			break;
		}
	}
	return (r);
}