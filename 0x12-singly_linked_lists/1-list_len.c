#include "lists.h"

/**
 * list_len - returns then number of elements in a list
 * @h: stringly linked list
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nbr_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}
