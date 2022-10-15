#include <stdio.h>

/**
 * main- Start point
 *
 * numbers using putchar
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
	putchar('\n');
	return (0);
}
