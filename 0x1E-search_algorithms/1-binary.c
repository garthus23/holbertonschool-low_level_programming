#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t middle;
	size_t tmp;
	size_t i;
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
				for (i = 0; i < middle - 1; i++)
				{
					printf("%d, ", newarray[i]);
				}
				printf("%d\n", newarray[i]);
				newarray[middle] = '\0';
				middle = middle / 2;
			}
			if (newarray[middle] < value)
			{
				tmp = middle;
				middle++;
				for (i = 0; newarray[middle] != '\0'; i++, middle++)
				{
					newarray[i] = newarray[middle];
					printf("%d, ", newarray[i]);
				}
				printf("\n");
				newarray[i] = '\0';
				middle = tmp / 2;
			}

			
			if (newarray[middle] == value)
			{
				for (i = middle; newarray[i] != '\0'; i++)
				{
					printf("%d, ", newarray[i]);
				}
				printf("\n");
				return middle;
			}
		}
	}
	return (-1);
}
