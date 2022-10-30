#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: input
 * Return: 0
 */

char *leet(char *s)
{
	int count, i;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	for (count = 0; *(s + count) != '\0'; count++)
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lower[i] || *(s + count) == upper[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
	}

	return (s);
}
