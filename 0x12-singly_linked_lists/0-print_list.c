#include <stdio.h>
#include "lists.h"


/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t nod = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nod++;
	}
	return (nod);
}


