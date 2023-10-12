#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - print array elements.
 * @array: pointer to our array.
 * @size: size of our array.
 * @action: pointer to function that prints elements.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !size || !action)
	{
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
