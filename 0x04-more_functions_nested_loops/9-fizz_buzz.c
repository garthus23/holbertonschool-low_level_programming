#include <stdio.h>
#include "holberton.h"

/**
* main - print fizzbuzz
* Return: 0 - when it works
*/

void main(void)
{
	int number;
	
	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz ");
		} 
		else if (number % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", number);
		}
	}
	printf("\n");
}
