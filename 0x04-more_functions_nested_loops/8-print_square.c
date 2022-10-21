#include "main.h"

/**
 * print_square - print squares using # symbol
 * @size - length of squares
 * Return: nill
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0;i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			if (i == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
