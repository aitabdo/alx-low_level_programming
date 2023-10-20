#include "lists.h"
/**
 * list_len - check the code for Holberton School students.
 * @h: pointer to struct.
 * Return: int (number of nodes).
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
