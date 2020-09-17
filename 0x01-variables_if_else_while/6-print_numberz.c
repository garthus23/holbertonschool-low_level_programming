#include <stdlib.h>
#include <stdio.h>

/* function to print the first 10 Digits*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i%10) + '0');
	}
	putchar('\n');
	return (0);
}
