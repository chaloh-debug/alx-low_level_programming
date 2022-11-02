#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to check
 * @needle: subtring to locate
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
