#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: pointer to head of list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *noden;

	noden = malloc(sizeof(listint_t));

	if (noden == NULL)
		return (NULL);

	noden->n = n;
	noden->next = *head;
	*head = noden;

	return (*head);
}
