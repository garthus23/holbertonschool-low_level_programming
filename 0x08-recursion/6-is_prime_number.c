#include "holberton.h"

/**
* is_prime_number - input integer is a prime number
* @n: integer
* Return: 0
*/

int is_prime_number(int n)
{
	if (n > 0 && n <= 3)
	{
		return (1);
	}
	if (n % (n-1) != 0) 
	{
		return 	n - is_prime_number(n-1);
	}
	else
	{
		return (0);
	}

}
