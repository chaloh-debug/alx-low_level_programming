#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input
 * Return: 0
 */

void rev_string(char *s)
{
	int i, j, temp;

	j = 0;

	while (*(s + j) != '\0')
	{
		j++;
	}
	while (i >= 0)
	{
		temp = s[i];
		s[i] = s[j];
		j++;
		i--;
	}
}
