#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s2: string one
 * @s2: strig two
 * @n: bytes in s2
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k, l;
	char *conct;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	conct = malloc(sizeof(char) * (i + j + 1));

	for (k = 0; k <= i; k++)
	{
		conct[k] = s1[k];
	}

	for (l = 0; l < n; k++, l++)
	{
		conct[k] = s2[j];
	}

	if (conct == NULL)
		return (NULL);

	return (conct);
}
