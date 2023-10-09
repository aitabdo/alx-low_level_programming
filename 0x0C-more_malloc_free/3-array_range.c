#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *array_range -  a function that creates an array of integers.
 * @min: min of int in array
 * @max: max of int in array
 * Return: pointer to memory address .
 */

int *array_range(int min, int max)
{
	char *t;
	unsigned int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	t = malloc((max - min + 1) * sizeof(int));
	if (!t)
	{
		return (NULL);
	}
	while (i <= max - min)
	{
		t[i] = min + i;
		i++;
	}
	return (t);
}
