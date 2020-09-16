#include <stdlib.h>
#include <stdio.h>

/* function to print the double alphabet ( uppercase and lowercase ) */
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
