#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: first node in the linked list.
 * @n: new node's data.
 * Return: pointer to head of linked list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (*head == NULL)
	{
		dlistint_t *new_node;

		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		dlistint_t *tmp, *new_node;

		tmp = *head;
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		new_node->next = tmp;
		tmp->prev = new_node;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
