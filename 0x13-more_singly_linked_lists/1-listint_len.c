#include "lists.h"

/**
 * listint_len -ks the number of nodes a linked list.
 * @h: head of the list.
 * Return: int (the numbre of elements).
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t k = 0;

	while (cursor != NULL)
	{
		k += 1;
		cursor = cursor->next;
	}
	return (k);
}
