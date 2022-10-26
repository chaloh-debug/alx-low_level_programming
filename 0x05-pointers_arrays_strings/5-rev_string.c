#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input
 * Return: 0
 */

void rev_string(char *s)
{
	int i, j;
	char *start, *end, temp;

	for (j = 0; j < i - 1; j++)
	{
		end++;
	}

	for (j = 0; j < i / 2; j++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
		return(j);
	}
}
