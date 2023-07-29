#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *list;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list->str);
		free(list);
	}
}
