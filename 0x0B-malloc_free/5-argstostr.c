#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments
 * @ac: number of argument
 * @av: a string
 **/

char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *s = NULL;

	s = malloc(sizeof(char)*1000);

	j = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for(i = 1; i < ac; i++)
		{
		        for(; av[i][k] != '\0'; k++)
			{
				s[j] = av[i][k];
				j++;
			}
			s[j] = '\n';
			j++;
			k = 0;
		} 
		s[j] = '\0';
		return (s);
	}
}
