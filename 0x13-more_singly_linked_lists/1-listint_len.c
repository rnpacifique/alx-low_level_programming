#include "lists.h"

/**
 * listint_len - show the number of elements in a linked listint_t list.
 * @h: head of nodes
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}

