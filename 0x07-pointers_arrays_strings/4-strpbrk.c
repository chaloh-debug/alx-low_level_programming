#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: check segment
 * @accept: accepted bytes
 * Return: first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while ((*(s + i) && *(accept + i)) != '\0')
	{
		if (*(s + i) == *(accept + i))
			return (s + i);
	}
	return ('\0');
}
