#include "main.h"
/**
 * _isdigit - check if input is a digit
 * @c: input integer.
 * Return: 1 if c is digit, 0 if not.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
