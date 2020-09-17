#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the reverse alphabet
 * Return: 0 if the program works
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
