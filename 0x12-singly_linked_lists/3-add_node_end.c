#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a linked list
 * @head: head of the linked list
 * @str: string to store in the list
 *
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nbr_node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nbr_node = 0; str[nbr_node]; nbr_node++)
		;

	new->len = nbr_node;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
