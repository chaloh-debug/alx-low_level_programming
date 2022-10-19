#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: ASCII character
 *
 * return: 0 if zero. 1 if greater than zero
 * -1 if less than zero.
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
	_putchar('\n');
}
