#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	size_t new_char;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);

	first->str = strdup(str);

	for (new_char = 0; str[new_char]; new_char++)
		;

	first->len = new_char;
	first->next = *head;
	*head = first;

	return (*head);
}
