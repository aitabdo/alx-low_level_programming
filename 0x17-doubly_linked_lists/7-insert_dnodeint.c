#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: first node in the linked list.
 * @idx: index to insert in.
 * @n: node's data.
 * Return: pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	if (h == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while (i < idx && tmp)
	{
		if (i == idx - 1)
		{
			dlistint_t *tmp2 = tmp->next;

			new_node->next = tmp->next;
			tmp2->prev = new_node;
			tmp->next = new_node;
			new_node->prev = tmp;
			return (new_node);
		}
		else
			tmp = tmp->next;
		i++;
	}
	return (NULL);
}
