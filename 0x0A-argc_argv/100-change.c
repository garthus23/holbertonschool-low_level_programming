#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "holberton.h"

int verifycoins(int cents);

/**
 * main - programm to print argv[0]
 * @argc: number of cmd line argument
 * @argv: array of cmd line arguments
 * Return: 0
**/

int main(int argc, char *argv[])
{
	int cent;
	unsigned int j;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (j = 0; j < strlen(argv[1]); j++)
		{
			if (!(isdigit(argv[1][j])))
			{
				printf("0\n");
				return (2);
			}
		}
		if (atoi(argv[1]) > 0)
		{
			cent = atoi(argv[1]);
			verifycoins(cent);
		}
		else
		{
			printf("0\n");
		}
	}
	return (0);
}

/**
 * verifycoins - check number of coins
 * @cents: amount of money given
 * Return: 0
**/

int verifycoins(int cents)
{
	int coins;

	coins = 0;
	for (; cents != 0;)
	{
		if (cents - 25 >= 0)
		{
			cents = cents - 25;
			coins++;
		}
		else if (cents - 10 >= 0)
		{
			cents = cents - 10;
			coins++;
		}
		else if (cents - 5 >= 0)
		{
			cents = cents - 5;
			coins++;
		}
		else if (cents - 2 >= 0)
		{
			cents = cents - 2;
			coins++;
		}
		else if (cents - 1 >= 0)
		{
			cents = cents - 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
