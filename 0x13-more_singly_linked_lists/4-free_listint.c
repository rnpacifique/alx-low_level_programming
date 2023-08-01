#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: head of a linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *h;

	while (head != NULL)
	{
		h = head->next;
		free(head);
		head = h;
	}
}

