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
	size_t nelem = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

	       nelem++;
	       h = h->next;
	}
	return (nelem);
}


