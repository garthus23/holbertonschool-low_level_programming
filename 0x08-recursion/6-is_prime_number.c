#include "holberton.h"

/**
* is_prime_number - input integer is a prime number
* @div: integer
* @num: integer
* Return: is_prime_number2(div, num)
*/

int is_prime_number2(int div, int num);

int is_prime_number(int n)
{
	int div;
	int num;

	div = 2;
	num = n;

	if (n < 2)
	{
		return (0);
	}
	return (is_prime_number2(div, num));
}

/**
* is_prime_number2 - input integer is a prime number
* @num: integer
* @div: integer
* Return: div
*/

int is_prime_number2(int div, int num)
{
	if ((num % div != 0) && (div <= num))
	{
		div = is_prime_number2(div + 1, num);
	}
	if (div * div == num)
	{
		div = 0;
	}
	if (div == 2)
	{
		div = 0;
	}
	if (div == num)
	{
		div = 1;
	}
	return (div);
}
