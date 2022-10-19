#include "main.h"

/**
 * _islower - check letter case
 *
 * return 0 (success)
 *
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
