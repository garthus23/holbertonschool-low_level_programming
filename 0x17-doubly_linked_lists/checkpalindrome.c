#include <stdio.h>
#include <stdlib.h>

/** main - function to find palindrome max
 * Return: 0 if it works
**/
int main(void)
{
	int i;
	int j;
	int k;
	char str[6];
	int tmp;
	int result;
	int len;


	for (i=100 ; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			tmp = i * j;
			sprintf(str,"%d", tmp);
			if (str[0] == str[5] && str[1] == str[4] && str[3] == str[2])
				result = tmp;
		}
	}
	printf("%d\n", result);
	return (0);
}
