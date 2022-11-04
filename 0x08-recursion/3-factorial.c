#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: input integer
 * Return: 0
 */

int factorial(int n)
{
	if ( n > 0)
	{
		return (n * factorial(n - 1));
		factorial(n);
	}
	else
		return (-1);
}
