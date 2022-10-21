#include "main.h"

/**
 * _isupper - check for lower or uppercase
 * @c: input ASCII
 * Return 1 if upper. return 0 if lower.
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
