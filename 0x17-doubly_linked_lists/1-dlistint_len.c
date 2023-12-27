#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked.
 * @h: head of linked list.
 * Return: int(number of nodes in linkedlist).
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len_of_list = 0;

	while (h)
	{
		h = h->next;
		len_of_list++;
	}
	return (len_of_list);
}
