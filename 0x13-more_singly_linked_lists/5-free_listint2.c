#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of a linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}
	*head = NULL;
}

