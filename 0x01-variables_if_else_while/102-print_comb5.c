#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers
 * Return: 0 if the program works
 */
int main(void)
{
	int i;
	int n;

	for (i = 0; i < 100; i++)
	{
		for (n = 0; n < 100; n++)
		{
			int dizainei = i / 10;
			int unitei = i % 10;
			int dizainen = n / 10;
			int uniten = n % 10;

			if (n > i)
			{
				putchar(dizainei + '0');
				putchar(unitei  + '0');
				putchar(' ');
				putchar(dizainen + '0');
				putchar(uniten  + '0');
				if ((i != 98) || (n != 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
