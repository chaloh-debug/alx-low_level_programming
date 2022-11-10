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
	unsigned int  i, j;
	char ptr;

	if (str  == 0)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		continue;

	*ptr = (char*)malloc(sizeof(str));

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < j; i++)
		copy[i] = str[i];
	return (ptr);
}
