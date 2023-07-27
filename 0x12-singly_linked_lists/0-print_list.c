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
	       	h = h->next;
	       nelem++;
	}
	return (nelem);
}


