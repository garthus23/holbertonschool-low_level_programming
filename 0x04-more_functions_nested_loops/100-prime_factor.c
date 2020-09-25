#include <stdio.h>

/**
* main - print prime numbers
* Return: 0 - when it works
*/

int main(void)
{
	long j, number, result;

	number = 612852475143;

	for (j = 2; j < number; j++)
	{
		if (number % j == 0)
		{
			number = number / j;
			j = 2;
		}
	}
	printf("%ld\n", number);
	return (0);
}
