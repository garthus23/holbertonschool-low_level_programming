#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase
 * Return: 0 if the program works
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
