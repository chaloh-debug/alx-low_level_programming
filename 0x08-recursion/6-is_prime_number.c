#include "main.h"
/**
 * division - trial division
 * @n: input
 * @i: divider
 * Return: 0
 */

int division(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (division(n, i + 1));
}
/**
 * is_prime_number - looks for prime number.
 * @n: input integer
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	return (division(n, 2));
}
