#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @str: string where list is stored
 * @head: head of list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	size_t newchar;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (newchar = 0; str[newchar]; newchar++)
		;
	new_node->len = newchar;
	new_node->next  = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (*head);
}

