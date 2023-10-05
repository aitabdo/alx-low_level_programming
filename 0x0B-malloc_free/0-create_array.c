#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *create_array - creates an array of chars,initializes it with a spec char.
 * @size: size of our array
 * @c: spec character
 * Return: pointer to our array
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *t;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(*t) * size);
	if (!t)
	{
		return (NULL);
	}
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
