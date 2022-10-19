#include "main.h"

/**
 * main- Start point
 *
 * function prototypes
 *
 * Return 0 (Success)
 */


void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n);
}
