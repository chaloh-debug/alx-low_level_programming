#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input character
 * Return: 0
 */

void print_rev(char *s)
{
	int count;
	
	while (*(s + count) != '\0')
	{
		count++;
	}
	while (count--)
	{
		_putchar(*(s + count));
	}
	_putchar('\n');
}
