#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	i = 0;
	while (i < index)
	{
		if (tmp)
			tmp = tmp->next;
		else
			tmp = NULL;
		i++;
	}
	return (tmp);
}
