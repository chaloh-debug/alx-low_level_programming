#include "main.h"

/**
 * print_triangle - create a triangle.
 * @size: size of triangle.
 * Return: 0
 */

void print_triangle(int size)
{
	int i,j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i >= 1; i++)
		{
			for (j = 1; j <= i - 1; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j <= size - i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
