#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers
 * @size:number of elements in the array.
 * @cmp: pointer to the function to be used to compare values
 * Return: nil
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
