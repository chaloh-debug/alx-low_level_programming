#include "main.h"

/**
 * print_last_digit -prints the last digit of a number
 *
 * @r:input integer inserted
 *
 *  Return: Always 0
 *
 */

int print_last_digit(int r)
{
	int a;

	a = r % 10;
	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}

}
