#include "holberton.h"

/**
 * print_alphabet - print the alphabet
 * Return: 0 when it works
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
