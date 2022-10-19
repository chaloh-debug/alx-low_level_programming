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
	int arr[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int loop;

	for (loop = 0; loop < 8; loop++)
	{
		_putchar(arr[loop]);
	}
	_putchar('\n');
	return (0);
}
