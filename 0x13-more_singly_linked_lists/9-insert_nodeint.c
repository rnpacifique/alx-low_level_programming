#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: head of linked list
 * @idx: index where new node to be added
 * @n: data for new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *h = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	for (a = 0; h && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new_node->next = h->next;
			h->next = new_node;
			return (new_node);
		}
		else
			h = h->next;
	}
	return (NULL);
}
