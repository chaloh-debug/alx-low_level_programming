#include "main.h"
/*
 * print_listint - prints all the elements of a listint_t list.
 * @h: list pointer
 * Return: No of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t prints = 0;
	while (h! = NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		prints++;
	}
	return (prints);
}
