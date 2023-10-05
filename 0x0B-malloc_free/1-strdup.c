#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * *_strdup - function that returnes a pointer to newly given (*str).
 * @str: arguments for this function
 * Return: (Success)
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int size = 0;
	char *t;

	if (!str)
	{
		return (NULL);
	}
	while (str[size])
	{
		size++;
	}
	t = malloc(sizeof(*str));

	if (!t)
	{
		return (NULL);
	}
	while (i < size)
	{
		t[i] = str[i];
		i++;
	}
	return (t);
}
