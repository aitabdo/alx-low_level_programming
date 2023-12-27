#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 * @head: first node in the linked list.
 * Return: int(sum of all the data of a linkedlist).
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
