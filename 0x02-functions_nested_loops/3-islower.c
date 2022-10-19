#include "main.h"

/**
 * _islower - check letter case
 *
 * @c: ASCII character
 *
 * Return: 1 if lowercase. 0 the rest.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
