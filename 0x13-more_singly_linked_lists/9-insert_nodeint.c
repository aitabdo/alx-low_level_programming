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
	listint_t *len_of_linked_list = *head;
	listint_t *new_node;
	unsigned int i = 0;
	unsigned int len_of_list = 0;

	while (len_of_linked_list != NULL)
	{
		len_of_linked_list = len_of_linked_list->next;
		len_of_list++;
	}
	if (idx > len_of_list)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
