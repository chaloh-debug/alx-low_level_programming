#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 * @min: min integer
 * @max: max integer
 * Return: 0
 */

int *array_range(int min, int max)
{
	int i, *arr;

	if ( max > min)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (NULL);
