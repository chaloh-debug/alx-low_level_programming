#include "main.h"

/**
 * more_numbers - print 0 to 14, 10 times
 * Return: 0 (Success)
 */

void more_numbers(void)
{
	int counter, number;

	for (counter = 0; counter < 10; counter++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number > 9)
			{
				_putchar((number % 10) + '0');
			}
			_putchar((number / 10) + '0');
		}
		_putchar('\n');
	}
}
