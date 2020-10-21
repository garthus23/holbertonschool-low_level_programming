#include "calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *s =  argv[2];
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	printf ("char *s : %s\n", s);
	printf("Argv1 : %d\n", atoi(argv[1]));
	printf("Argv2 : %d\n", atoi(argv[3])); 

	if (argc == 4)
	{
		{
			printf("OK MAIN argv[1] = %s\n", argv[1]);
			get_op_func((s))(a, b);
		}
	}
	printf("Error\n");
	return (0);

}
