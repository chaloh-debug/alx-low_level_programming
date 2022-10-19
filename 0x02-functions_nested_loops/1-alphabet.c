#include "main.h"

/**
 * Print_alphabet -function
 *
 * print lowercase letters
 *
 * Return 0 (Success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
