#include "main.h"
/**
 * more_numbers - print 0 to 14
 * (10 times)
 * Return: 0
 */

void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for(c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar((ch/10) + 48);
			}
			_putchar(( % 10) + 48);
		}
		_putchar('\n');
	}
}
