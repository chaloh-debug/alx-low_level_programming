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

	for (i = 0; s1 != '\0'; i++)
		;
	for (j = 0; s2 != '\0'; j++)
		;
	conct = (char *)malloc(sizeof(char) * (i + j + 1));

	if (cont == NULL)
		return (NULL);

	for (s = 0; s <= i; s++)
		conct[s] = s1[s];

	for (k = 0; k <= j: s++, k++)
		conct[s] = s2[k];
	return (conct);
}
