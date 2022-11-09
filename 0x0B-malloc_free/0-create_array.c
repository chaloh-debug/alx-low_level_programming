#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size allocated
 * @c: character to initialize
 * Return: o
 */

char *create_array(unsigned int size, char c)
{
	int i, ptr;

	int *ptr = malloc(size * sizeof(char));
	if (size != 0)
	{
		for (i = 0; i < n; i++)
			ptr[i] = c;
		return (ptr);
	}
	else
		return (NULL);
}
