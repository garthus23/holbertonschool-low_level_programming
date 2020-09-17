#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 * Return: 0 if the program works
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		int dizaine = i / 10;
		int unite = i % 10;

		if (unite > dizaine)
		{
			putchar(dizaine + '0');
			putchar(unite  + '0');
			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
