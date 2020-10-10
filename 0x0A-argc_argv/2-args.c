#include <stdio.h>
#include "holberton.h"

/**
 * main - programm to print argv[0]
 * @argc: number of cmd line argument
 * @argv: array of cmd line arguments
 * Return: 0
**/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
