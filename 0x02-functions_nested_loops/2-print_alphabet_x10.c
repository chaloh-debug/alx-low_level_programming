#include "main.h"
/**
 * main- START
 *
 * nested loop
 *
 * Return: 0 (sucess)
 *
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 97;j <= 122; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
