#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a linked list
 * @head: head of the linked list
 * @str: string to store in the list
 *
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nbr_node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nbr_node = 0; str[nbr_node]; nbr_node++)
		;

	new->len = nbr_node;
	new->next = *head;
	*head = new;

	return (*head);
}
