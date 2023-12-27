#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: first node in the linked list.
 * @n: new node's data.
 * Return: pointer to head of linked list /NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	if (*head == NULL)
	{
		dlistint_t *new_node;

		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		dlistint_t *tmp = *head;
		dlistint_t *new_node;

		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = new_node;
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = tmp;
		return (new_node);
	}
	return (NULL);
}
