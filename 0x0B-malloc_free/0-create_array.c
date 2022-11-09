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
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));
	if (size != 0)
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
		return (ptr);
	}
	else
		return (NULL);
}
