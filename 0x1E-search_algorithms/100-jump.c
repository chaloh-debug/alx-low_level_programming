#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of valeue, -1 if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	int i, j = 0;
	int m = (int)sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[m] <= value && m < (int)size)
	{
		printf("Value checked array[%i] = [%i]\n", m, array[m]);
		i = m;
		m += (int)sqrt(size);
		if (m > (int)size - 1)
		{
			return (-1);
		}
	}
	printf("Value found between indexes [%i] and [%i]\n", i, m);
	for (j = i; j < m; j++)
	{
		printf("Value checked array[%i] = [%i]\n", j, array[i]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
