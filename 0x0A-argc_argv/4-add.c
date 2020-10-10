#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "holberton.h"

/**
 * main - programm to print argv[0]
 * @argc: number of cmd line argument
 * @argv: array of cmd line arguments
 * Return: 0
**/

int main(int argc, char *argv[])
{
	int i, num;
	unsigned int j;

	num = 0;

	if (argc < 1)
	{
		num = 0;
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			if (atoi(argv[i]) > 0)
			{
				num = num + atoi(argv[i]);
			}
		}
	}
	printf("%d\n", num);
	return (0);
}
