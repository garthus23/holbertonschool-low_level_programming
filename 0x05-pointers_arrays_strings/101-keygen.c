#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
* main - main function to create the password
* Return: 0 when it works
*/

int main(void)
{
	int i, sum, r;

	char array[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	char password[100];

	srand(time(NULL));

	sum = 0;

	i = 0;

	while (sum < (2772 - 122))

	{

		r = rand() % 62;

		password[i] = array[r];

		sum = sum + password[i];

		i++;

	}

	r = 2772 - sum;

	password[i] = r;
	printf("%s", password);
	return (0);
}
