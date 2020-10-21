#include <stdlib.h>
#include <stdio.h>
#include "calc.h"


int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[]={{"+", op_add},{"-", op_sub},{"*", op_mul},{"/", op_div},{"%", op_mod},{NULL, NULL}};
	int i;

	printf("OK op_function");

	for (i = 0; i < 5; i++)
	{
		printf("valeur de ops[i].op : %s", ops[i].op);
		if (ops[i].op == s)
		{
			printf("valeur de ops[i].op : %s", ops[i].op);
			return ops[i].f;
			
		}
	}
	return (0);
}
