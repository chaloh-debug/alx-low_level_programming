#include "function_pointers.h"
#include <stdlib.h>

/**
 * prints a name.
 * @name: pointer to name.
 * @f: pointer to function.
 * Return: nil
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
