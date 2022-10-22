#include "main.h"

/**
 * more_numbers - print 0 to 14, 10 times.
 * Return: 0
 */

void more_numbers(void)
{
	int count, num;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num % 10) + '0');
			}
			_putchar((num / 10) + '0');
		}
		_putchar('\n');
	}
}
