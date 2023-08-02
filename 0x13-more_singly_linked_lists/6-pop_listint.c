#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of listint_t linked list
 * Return: the head node’s data (n)
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	h = (*head)->next;
	free(*head);
	*head = h;

	return (data);
}
