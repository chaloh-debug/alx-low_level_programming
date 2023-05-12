#include "search_algos.h"

/**
 * interpolation_search - function using Interpolation search algorithm
 * @array: pointer to array
 * @size: size of the array
 * @value: value to search
 * Return: index where value is found
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;
	size_t pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

	if (array == NULL)
		return (-1);

	while (low < high)
	{
		pos = low + (((double)(high - low) / (
						array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%li] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (pos == 0 && array[pos] > value)
			return (-1);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
