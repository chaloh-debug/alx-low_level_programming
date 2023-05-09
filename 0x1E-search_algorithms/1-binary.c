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

	end = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = start + (end - start) / 2;
		printf("Searching in array:");
		for (i = start; i <= end; i++)
		{
			printf("%i", array[i]);
			if (i != end)
				printf(",");
		}
		printf("\n");

		if (array[mid] >  value)
			end = mid - 1;
		else if (array[mid] < target)
			start = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
