#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of
 * the string given as a parameter.
 * str: string pointer
 * Return: 0
 */

char *_strdup(char *str)
{
	unsigned int  i, j, len = 0;
	char *ptr;

	if (str  == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		len;

	ptr = malloc(sizeof(str) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		ptr[i] = str[i];

	return (ptr);
}
