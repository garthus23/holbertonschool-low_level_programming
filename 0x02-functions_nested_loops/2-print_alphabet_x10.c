#include "holberton.h"

/**
 * print_alphabet_x10 - Print the alphabet
 * Return : 0 when it's okay
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while(i < 10)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	i++;
	}
}
