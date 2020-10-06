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

	r = NULL, len = 0, j = 0;
	for (i = 0; needle[i] != '\0'; i++)
	{
		len++;
	}
	if (len == 0)
	{
		r = &haystack[0];
	}
	len = len - 1;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			l = i;
			for (j = 0; j <= len; j++)
			{
				if (haystack[l] == needle[j])
				{
					l++;
					n++;
				}
				if (n == (len))
				{
					r = &haystack[i];
					t = 12;
					break;
				}
			}
		}
		j = 0, n = 0;
		if (t == 12)
		{
			break;
		}
	}
	return (r);
}
