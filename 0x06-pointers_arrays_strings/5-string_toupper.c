#include "main.h"
/*
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @s: input
 * Return: reverse output
 */

char *string_toupper(char *s)
{
	int count = 0;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
	}

	return (s);
}
