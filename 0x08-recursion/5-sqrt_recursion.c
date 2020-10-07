#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _sqrt_recursion - natural square root of a number
* @n: integer
* Return: int
*/
int _sqrt_recursion2(int num, int r);

int _sqrt_recursion(int n)
{
	int r = n;
	int num = n;
	return _sqrt_recursion2(num, r);
	
}

int _sqrt_recursion2(int num, int r)
{
	if (num > 1 && num*num != r)
	{
		printf("%d\n",num);
		return num *_sqrt_recursion2(num-1, r);
	}
	else 
	{
		return 0;
	}
}
