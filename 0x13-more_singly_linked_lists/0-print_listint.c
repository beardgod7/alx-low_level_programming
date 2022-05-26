#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list elements
 *
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	register size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
