#include "main.h"

/**
 * power - find root using power
 * @n: input int
 * @root: root of int
 * Return: 0
 */

int power(int n, int root)
{
	if (root * root > n)
		return (-1);
	else if (root * root == n)
		return (root);
	else
		return (power(n, root + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: input int
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		power(n, 0);
}
