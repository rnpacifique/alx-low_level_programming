#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: head of linked list that point to first node
 * Return: the sum of all data(n)
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	sum += head->n;
	head = head->next;

	return (sum);
}

