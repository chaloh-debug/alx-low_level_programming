#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array.
 * @a: input
 * @n: input
 * Return: 0
 */

void print_array(int *a, int n)
{
	int c = 0;

	for (c = 0; c < n; c++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
