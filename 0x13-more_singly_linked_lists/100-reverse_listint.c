#include "lists.h"

/**
 * reverse_listint -  reverse a linked list.
 * @head: first node in the linked list.
 * Return: pointer to head of linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL, *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
