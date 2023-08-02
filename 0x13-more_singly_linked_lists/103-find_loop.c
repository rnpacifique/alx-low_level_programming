#include  "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of the list
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fir_node = head;
	listint_t *sec_node = head;
	
	if (head == NULL)
		return (NULL);
	while (fir_node && sec_node && sec_node->next)
	{
		sec_node = sec_node->next->next;
		fir_node = fir_node->next;

		if (sec_node == fir_node)
		{
			fir_node = head;
			while (fir_node != sec_node)
			{
				fir_node = fir_node->next;
				sec_node = sec_node->next;
			}
			return (sec_node);
		}
	}
	return (NULL);
}

