#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @r: input integer
 *
 * Return: Always 0.
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
	_putchar('\n');
}
