#include "search_algos.h"

/**
 * totheleft - keep the left side from the middle
 * @newarray: the array to parse
 * @middle: the middle
 * Return: Rien
 */
void totheleft(int *newarray, size_t *middle)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < (*middle) - 1; i++)
	{
		printf("%d, ", newarray[i]);
	}
	printf("%d\n", newarray[i]);
	newarray[(*middle)] = '\0';
	(*middle) = (*middle) / 2;
}

/**
 * totheright - keep the right side from the middle
 * @newarray: the array to parse
 * @middle: the middle
 * Return: Rien
 */
void totheright(int *newarray, size_t *middle)
{
	size_t tmp, i;

	tmp = (*middle);
	(*middle)++;
	printf("Searching in array: ");
	for (i = 0; newarray[(*middle)] != '\0'; i++, (*middle)++)
	{
		newarray[i] = newarray[(*middle)];
		if (newarray[(*middle) + 1] == '\0')
			printf("%d", newarray[i]);
		else
			printf("%d, ", newarray[i]);
	}
	printf("\n");
	newarray[i] = '\0';
	(*middle) = tmp / 2;
}

/**
 * tothemiddle - last middle to print
 * @newarray: the array to print
 * @middle: the middle
 * Return: rien
 */
void tothemiddle(int *newarray, size_t *middle)
{
	size_t i;

	printf("Searching in array: ");
	for (i = (*middle); newarray[i] != '\0'; i++)
	{
		if (newarray[i + 1] == '\0')
			printf("%d", newarray[i]);	
		else
			printf("%d, ", newarray[i]);
	}
	printf("\n");
}

/**
 * binary_search - search binary algo
 * @array: an array
 * @size: the size of the aray
 * @value: value to find
 * Return: rien
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle, i;
	int newarray[size];

	if (array)
	{
		for (i = 0; i < size; i++)
			newarray[i] = array[i];
		newarray[i] = '\0';

		printf("Searching in array: ");
		for (i = 0; i != size - 1; i++)
			printf("%ld, ", i);
		printf("%ld\n", i);

		middle = size / 2;
		if (size % 2 == 0)
			middle = (size - 1) / 2;

		while (middle != 1)
		{
			if (newarray[middle] > value)
			{
				totheleft(newarray, &middle);
			}
			if (newarray[middle] < value)
			{
				totheright(newarray, &middle);
			}			
			if (newarray[middle] == value)
			{
				tothemiddle(newarray, &middle);
				return middle;
			}
		}
		printf("Searching in array: %d\n", newarray[middle]);
	}
	return (-1);
}
