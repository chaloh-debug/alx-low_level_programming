#include "lists.h"
#include <string.h>

/*
 * list_len - returns the number of elements in
 * a linked list_t list.
 * @h: pointer to list.
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	size_t start;
	start = 0;

	if (h)
	{
		h = h->next;
		start++;
	}
	return (start);
}
