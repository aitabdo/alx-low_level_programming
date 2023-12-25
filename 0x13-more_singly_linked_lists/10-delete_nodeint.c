#include "lists.h"

/**
 * delete_nodeint_at_index -  dalete node at a given position.
 * @head: first node in the linked list.
 * @index: index where we have to delete.
 * Return: int(1 if success 0 if not).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *tmp1;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		listint_t *tmp2 = (*head)->next;

		*head = tmp2;
		free(tmp);
		return (1);
	}
	else
	{
		while (i < index && tmp)
		{
			if (i == index - 1)
			{
				tmp1 = tmp->next;
				tmp->next = tmp1->next;
				free(tmp1);
				return (1);
			}
			else
			{
				tmp = tmp->next;
			}
			i++;
		}
	}
	return (-1);
}
