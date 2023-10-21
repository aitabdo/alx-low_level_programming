#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: Const double pointer of structure list_t for beginning.
 * @str: Const char pointer for data to be added.
 * Return: int (List with new node for list_t list, NULL if failed).
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int j;
	list_t *new;

	new  = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
		new->next = *head;
	}
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	*head = new;

	new->str = strdup(str);

	for (j = 0; str[j]; j++)
	{
		new->len = j;
	}
	return (new);
}
