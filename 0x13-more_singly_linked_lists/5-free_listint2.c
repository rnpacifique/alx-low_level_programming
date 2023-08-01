#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of a linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *h;

	while (head == NULL)
	{
		h = (*head)->next;
		(*head)->next = NULL;
		free(*head);
		*head = h;
	}
}

