#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  a function that searches for an integer array.
 * @array: pointer to our array.
 * @size: size of our array.
 * @cmp: pointer to function that prints elements.
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (!array || !size || !cmp)
	{
		return;
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
