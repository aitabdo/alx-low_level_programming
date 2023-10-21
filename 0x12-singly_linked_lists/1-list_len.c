#include "lists.h"

/**
 * list_len - Finds the number of num_of_elements in a linked list_t list.
 * @h: The linked list_t list.
 * Return: int (the number of elements in h).
 */
size_t list_len(const list_t *h)
{
	size_t num_of_elements = 0;

	while (h)
	{
		num_of_elements++;
		h = h->next;
	}
	return (num_of_elements);
}
