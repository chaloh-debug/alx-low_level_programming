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
	char *conct;
	unsigned int i, j, k, add;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	add = i + n;

	conct = malloc(add + 1);

	if (conct == NULL)
		return (NULL);

	for (k = 0; k < add; k++)
		if (k < i)
			conct[k] = s1[k];
		else
			conct[k] = s2[k - add];

	conct[k] = '\0';

	return (conct);
}
