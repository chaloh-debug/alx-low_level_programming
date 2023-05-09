#include "search_algos.h"
/**
 * linear_search- function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: Values to search through
 * @size: Size of array
 * @value: target value
 * Return: value of index, -1 if value is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return -1;

	for (i = 0; i < (int)size; i++)
	{
		print("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return i;
		}
	}
	return -1;
}
