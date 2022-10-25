#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: Pointer
 * Return: 0
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}
