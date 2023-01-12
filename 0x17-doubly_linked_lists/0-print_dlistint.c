#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int counter;

	counter 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (counter);
}
