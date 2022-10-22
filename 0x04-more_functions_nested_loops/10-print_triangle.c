#include "main.h"

/**
 * print_triangle - create a triangle.
 * @size: size of triangle.
 * Return: 0
 */

void print_triangle(int size)
{
	int i,j,k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < (size - 1); j++)
				_putchar(32);
			for (k = 0; k <= j; k++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
