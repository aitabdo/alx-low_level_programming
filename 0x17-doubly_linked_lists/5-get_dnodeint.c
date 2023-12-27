#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: first node in the linked list.
 * @index: node to get's index.
 * Return: pointer to the got node./NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = head;

	while (i < index && head)
	{
		if (tmp)
			tmp = tmp->next;
		else
			tmp = NULL;
		i++;
	}
	return (tmp);
}
