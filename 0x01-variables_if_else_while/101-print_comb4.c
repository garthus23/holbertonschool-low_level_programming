#include <stdlib.h>
#include <stdio.h>

/* function to print the first 10 Digits*/
int main(void)
{
	int i;

	for (i = 1; i < 789; i++)
	{
		int centaine = i / 100;
		int dizaine = (i / 10) % 10;
		int unite = i % 10;

		if ((centaine < dizaine) && (unite > dizaine))
		{
			putchar(centaine + '0');
			putchar(dizaine + '0');
			putchar(unite  + '0');
			if (i < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
