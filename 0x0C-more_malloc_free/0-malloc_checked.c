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

	size = malloc(b);

	if (size == NULL)
	{
		exit(98);
	}
	return (size);
}
