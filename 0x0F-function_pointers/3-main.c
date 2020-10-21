#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - caclculate from input
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if it works
 **/

int main(int argc, char **argv)
{

	if (argc == 4 && argv[2][1] == '\0')
	{
		if (argv[2][0] == '/' && argv[3][0] == '0')
		{
			printf("Error\n");
			exit(100);
		}
		if (argv[2][0] == '*' && argv[3][0] == '0')
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]))));
		return (0);
	}
	printf("Error\n");
	exit(98);

}
