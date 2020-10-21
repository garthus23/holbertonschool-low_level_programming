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
	int i;


	for (i = 0; i < 5; i++)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
	}
	exit (99);
}
