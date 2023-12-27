#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: first node in the linked list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *tmp = head->next;

		free(head);
		head = tmp;
	}
}
