#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: first node in the linked list.
 * @idx: index where we  have to insert in.
 * @n: new node's data.
 * Return: new node's address.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (i < idx - 1)
	{
		if (tmp)
			tmp = tmp->next;
		else
		{
			return (NULL);
		}
		i++;
	}
	if (tmp->next)
	{
		new_node->next = tmp->next;
		tmp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
