#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - caclculate from input
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if it works
 **/

int main(int argc, char **argv)
{

	if (argc == 4)
	{
		{
			return (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
		}
	}
	printf("Error\n");
	return (0);

}
