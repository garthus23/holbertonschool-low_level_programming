#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - get the calcul to do
 * @s: an operator
 * Return: the result or nothing
 **/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}};
	int i = 0;


	while ( i < 5)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	exit (99);
}
