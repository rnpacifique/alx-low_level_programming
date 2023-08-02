#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * at index index of a listint_t linked list.
 * @head: head that point to first node of linked list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *h = *head;
	unsigned int a;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	for (a = 0; a < index; a++)
	{
		if (h->next == NULL)
			return (-1);
		h = h->next;
	}
	current = h->next;
	h->next = current->next;
	free(current);
	return (1);
}


