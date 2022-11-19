#include "variadic_functions.h"

/**
 * print_all - prints all formats.
 * @format: is a list of types of arguments passed to the function
 * Return: nil
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j, k = 0;
	char *str;
	const char formats[] = "ch, in, fl, st";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (formats[j])
		{
			if (format[i] == formats[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'ch':
			printf("%c", va_arg(args, int)), k = 1;
			break;
		case 'in':
			printf("%d", va_arg(args, int)), k = 1;
			break;
		case 'fl':
			printf("%f", va_arg(args, double)), k = 1;
			break;
		case 'st':
			str = va_arg(args, char *), k = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n");
	va_end(args);
}
