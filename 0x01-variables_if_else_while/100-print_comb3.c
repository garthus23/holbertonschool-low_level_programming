#include <stdlib.h>
#include <stdio.h>

/* function to print the first 10 Digits*/
int main(void)
{
	int i = 1;
	int n = 2;

	while (i < 100)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		i++;
		if (i < 89)
		{
			putchar(',');
			putchar(' ');
		}
		if (i % 10 == 0)
		{
			i += n;
			n++;
		}
	}
	putchar('\n');
	return (0);
}
