#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at index.
 * @head: first node in the linked list.
 * @index: index to delete at.
 * Return: int (1 if success 0 if fail);
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		if (tmp->next)
		{
			*head = tmp->next;
			(*head)->prev = NULL;
			free(tmp);
			return (1);
		}
		free(tmp), tmp = NULL;
		*head = NULL;
		return (1);
	}
	else
	{
		while (i < index && tmp)
		{
			if (i == index - 1)
			{
				dlistint_t *tmp1 = tmp->next;

				if (tmp1->next)
				tmp1->next->prev = tmp;
				tmp->next = tmp1->next;
				free(tmp1);
				return (1);
			}
			else
				tmp = tmp->next;
			i++;
		}
		return (-1);
	}
}
