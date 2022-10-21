#include "main.h"
#include <stdio.h>

/**
 * main - check for lower or uppercase
 * Return 1 if upper. return 0 if lower.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
