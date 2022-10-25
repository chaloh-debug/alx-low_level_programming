#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: First integer
 * @b: Second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
