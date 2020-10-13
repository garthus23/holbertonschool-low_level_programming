#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int verifylenargav(int ac, char **av);

/**
 * *argstostr - function that concatenates all the arguments
 * @ac: number of argument
 * @av: a string
 * Return: Pointer sur char
 **/

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *s = NULL;

	j = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		l = verifylenargav(ac, av);
		s = malloc(sizeof(char) * l);
		k = 0;
		for (i = 0; i < ac; i++)
		{
			for (; av[i][k] != '\0'; k++)
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

/**
 * verifylenargav - function return len of argv[]
 * @ac: number of argument
 * @av: the arguments
 * Return: int
 **/

int verifylenargav(int ac, char **av)
{
	int i, k, l;

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			l++;
		}
		l += 1;
	}
	return (l);
}
