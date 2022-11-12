#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: mem size
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	int *size;

	size = malloc(sizeof(int) * b);

	if (size == NULL)
	{
		return (98);
	}
	return (size);
}
