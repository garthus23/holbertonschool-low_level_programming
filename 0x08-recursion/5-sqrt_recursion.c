#include "holberton.h"

int _sqrt_recursion2(int num, int r);

/**
* _sqrt_recursion - natural square root of a number
* @n: number * number = resultat
* Return: number
*/


int _sqrt_recursion(int n)
{
	int r = n;
	int num = n;

	if (r == 0)
	{
		return (0);
	}
	if (r == 1)
	{
		return (1);
	}
	return (_sqrt_recursion2(num, r));
}

/**
* _sqrt_recursion2 - natural square root of a number
* @num: number * number = resultat
* @r: number to get
* Return: number
*/


int _sqrt_recursion2(int num, int r)
{
	if (num > 0 && num * num != r)
	{
		num = _sqrt_recursion2(num - 1, r);
	}

	if (num == 0 || num < 0)
	{
		num = -1;
	}
	return (num);
}
