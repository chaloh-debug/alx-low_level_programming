#include "main.h"

/**
 * _isalpha -  checks for alphabetic character
 *
 * @c: ASCII code
 *
 * return: 1 if lowercase. Return 0 the rest
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
