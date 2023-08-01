#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of linked list
 * @head: head of the linked list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
		new_node->n = n;
	new_node->next = *head;
	new_node = *head;

	return (new_node);
}



