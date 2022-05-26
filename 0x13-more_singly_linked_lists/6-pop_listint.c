#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns head node data (n)
 * @head: double pointer to head of list;
 *
 * Return: value at the head
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int res;

	if (!(*head) || !head)
		return (0);
	current = *head;
	res = current->n;
	*head = (*head)->next;
	free(current);
	return (res);
}
