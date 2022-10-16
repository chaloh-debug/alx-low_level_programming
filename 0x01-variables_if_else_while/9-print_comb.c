#include <stdio.h>

/**
 * main- Start point
 *
 * nested loop
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
		for (j = '0'; j <= '9'; j++)
		{
			putchar(j);
			putchar(", ");
		}
	}
	putchar('\n');
	return (0);
}
