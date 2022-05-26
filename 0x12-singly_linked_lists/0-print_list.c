#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to struct
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}
