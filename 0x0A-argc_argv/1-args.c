#include <stdio.h>
#include "holberton.h"

/**
 * main - programm to print argv[0]
 * @argc: number of cmd line argument
 * @argv: array of cmd line arguments
 * Return: 0
**/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
