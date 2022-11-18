#include "main.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: 1st arg
 * Return: 0 if n==0. sum if not.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = n; i >= 0; i = va_arg(args, int))
	{
		sum += i;
	}
	va_end(args);
	return (sum);