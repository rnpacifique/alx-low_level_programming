#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: head of the list which point to the first node
 * @index: index of the node
 * Return: pointer to a listint_t liked list
 * if node does not exist return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *current = head;

	if  (head == NULL)
		return (NULL);

	for (a = 0; a < index; a++)
	{
		current = head->next;
		if (current == NULL)
			return (NULL);
	}
	return (current);
}
