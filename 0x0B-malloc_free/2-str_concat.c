#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, s;
	char *conct;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	conct = malloc(sizeof(char) * (i + j + 1));

	if (conct == NULL)
	{
		free(conct);
		return (NULL);
	}

	for (s = 0; s <= i; s++)
		conct[s] = s1[s];

	for (k = 0; k <= j; s++, k++)
		conct[s] = s2[k];
	return (conct);
}
