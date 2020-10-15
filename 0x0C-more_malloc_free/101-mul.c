#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main - multiply two int in argument
 * @argc: number of arguments
 * @argv: char * argument
 * Return: an int
**/

int main(int argc, char **argv)
{
	int multiply, i, j;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					exit(98);
				}
			}
		}
		multiply = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiply);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
