#include "main.h"

/**
 * print_diagonal - print diagonal line.
 * @n: iterations.
 * Return: nill.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			if (i == n - 1)
				-putchar('\n');
		}
	}
	_putchar('\n');
}
