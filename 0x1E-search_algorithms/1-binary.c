#include "search_algos.h"
/**
 * binary_search- function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: values to search through
 * @size: size of array
 * @value: target value
 * Return: index of target, -1 if value is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int i, start, mid, end;

	start = 0;
	end = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array:");
		for (i = start; i <= end; i++)
		{
			printf(" %i", array[i]);
			if (i != end)
				printf(",");
		}
		printf("\n");

		mid = (int)((start + end) / 2);

		if (value > array[mid])
			start = mid + 1;
		else if (value < array[mid])
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
