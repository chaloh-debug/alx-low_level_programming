#include "main.h"

/**
 * _islower - check letter case
 *
 * c - parameter to check 
 * return: 1 (success)
 * return: 0 (not lowercase)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
