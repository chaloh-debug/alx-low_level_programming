#include "search_algos.h"

/**
 * exponential_search - exponential search alg
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search in the array
 * Return: index
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1;

	if (array == NULL || (int)size == 0)
		return (-1);

	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%i] = [%i]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound < (int)size)
		return (binary_search_ex(array, value, bound / 2, bound));
	else
		return (binary_search_ex(array, value, bound / 2, (int)size - 1));
}

/**
 * binary_search_ex - binary search alg
 * @array: pointer to array
 * @value: value to search in the array
 * @first: first value of the array
 * @last: last value of the array
 * Return: index
 */
int binary_search_ex(int *array, int value, int first, int last)
{
	int i, mid;
	int start = first;
	int end = last;

	if (array == NULL)
		return (-1);

	printf("Value found between indexes [%i] and [%i]\n", first, last);
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
