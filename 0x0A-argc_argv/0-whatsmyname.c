#include <stdio.h>
#include "holberton.h"

/**
 * main - programm to print argv[0]
 * @argc: number of cmd line argument
 * @argv: array of cmd line arguments
 * Return: 0
**/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
