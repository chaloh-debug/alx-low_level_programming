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
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = '9'; i <= '15'; i++)
	{
		putchar(i%16);
	}
	putchar('\n');
	return (0);
}
