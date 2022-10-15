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

	for (i = '0'; i < '15'; i++)
	{
		j = i%16;
		putchar(j);
	}
	putchar('\n');
	return (0);
}
