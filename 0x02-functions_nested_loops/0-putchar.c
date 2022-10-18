#include "main.h"

/**
 * main- start point
 *
 * putchar
 * 
 * Return: 0 (success)
 *
 */
int main(void)
{
	int arr[] = {95, 70, 75, 74, 63, 68, 61, 72};
	int loop;

	for (loop = 0; loop < 8; loop++)
	{
		_putchar(arr[loop]);
	}
	_putchar('\n');
	return (0);
}
