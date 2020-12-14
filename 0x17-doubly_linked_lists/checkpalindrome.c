#include <stdio.h>
#include <stdlib.h>

/** main - function to find palindrome max
 * Return: 0 if it works
**/
int main(void)
{
	int i;
	int j;
	char str[6];
	int tmp;
	int result = 0;


	for (i=100 ; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			tmp = i * j;
			sprintf(str,"%d", tmp);
			if (str[0] == str[5] && str[1] == str[4] && str[3] == str[2])
			{
				if (tmp > result)
					result = tmp;
				printf("result : %d = %d * %d\n", result, i , j); 
			}
		}
	}
	return (0);
}
