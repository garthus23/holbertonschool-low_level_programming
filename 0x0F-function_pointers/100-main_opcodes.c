#include <stdlib.h>
#include <stdio.h>

/**
 * main - don't really know what we are talking about
 * @argc: int
 * @argv: input char*
 * Return: 0 when it works
 **/

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
