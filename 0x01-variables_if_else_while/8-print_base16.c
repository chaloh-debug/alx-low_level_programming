#include <stdio.h>

/**
 * main- Start point
 *
 * hexadecimal
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'F'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
