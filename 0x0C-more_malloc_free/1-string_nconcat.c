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
	unsigned int i, j, k, l, out;
	char *conct;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > s2)
		n = s2;

	out = i + n;

	conct = malloc(out + 1);

	if (conct == NULL)
		return (NULL);

	if (k = 0; k < i; k++)
	{
		conct[k] = s1[k];
	}
	if (l = 0; l < n; k++,l++)
	{
		conct[k] = s2[l];
	}
	conct[i] = '\0';

	return (conct);
}
