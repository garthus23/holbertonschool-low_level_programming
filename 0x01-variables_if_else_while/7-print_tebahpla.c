#include <stdlib.h>
#include <stdio.h>

/* function to print the reverse alphabet */
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
