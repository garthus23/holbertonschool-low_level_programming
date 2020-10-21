#include "calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		{
			printf("OK MAIN\n");
			return get_op_func(argv[3])((atoi(argv[2])), (atoi(argv[4])));
		}
	}
	printf("Error\n");
	return (0);

}
