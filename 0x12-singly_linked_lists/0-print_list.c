#include "main.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to list.
 * Return: str is NULL, print [0] (nil).
 */

size_t print_list(const list_t *h)
{
	list_t first = NULL;

	while (h)
	{
		if (h->str != NULL)
			printf("%d %s \n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
		first++;
	}
	return (first);
}
