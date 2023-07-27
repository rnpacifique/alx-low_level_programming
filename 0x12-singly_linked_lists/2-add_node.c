#include "lists.h"
#include <stdlib.h>

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: head of list
 * @str: string store the list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t newchar;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);

	for (newchar = 0; str[newchar]; newchar++)
		;
	newnode->len = newchar;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}



