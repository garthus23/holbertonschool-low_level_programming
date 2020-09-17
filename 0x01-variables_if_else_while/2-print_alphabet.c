#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the alphabet
 * Return: 0 if the program works
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
