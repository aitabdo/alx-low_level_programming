#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: the head of our linked list.
 * Return: int (number of nodes).
 */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
		{
			printf("%s\n", h->str);
			h = h->next;
			num_of_nodes++;
		}
	}
	return (num_of_nodes);
}
