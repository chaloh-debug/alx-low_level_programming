#include <stdio.h>

/**
 * main- Start point
 *
 * z to a
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char i;
	
	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
