#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - calcul to make
 * @a: an integer
 * @b: an integer
 * Return: 0 when it works
 **/

int op_add(int a, int b)
{
	printf("%d\n", a + b);
	return (0);
}

/**
 * op_sub - calcul to make
 * @a: an integer
 * @b: an integer
 * Return: 0 when it works
 **/

int op_sub(int a, int b)
{
	printf("%d\n", a - b);
	return (a - b);
}

/**
 * op_mul - calcul to make
 * @a: an integer
 * @b: an integer
 * Return: 0 when it works
 **/

int op_mul(int a, int b)
{
	printf("%d\n", a * b);
	return (a * b);
}

/**
 * op_div - calcul to make
 * @a: an integer
 * @b: an integer
 * Return: 0 when it works
 **/

int op_div(int a, int b)
{
	printf("%d\n", a / b);
	return (a / b);
}

/**
 * op_mod - calcul to make
 * @a: an integer
 * @b: an integer
 * Return: 0 when it works
 **/

int op_mod(int a, int b)
{
	printf("%d\n", a % b);
	return (a % b);
}
