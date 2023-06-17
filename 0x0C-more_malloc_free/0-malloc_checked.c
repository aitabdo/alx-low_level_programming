#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* *malloc_checked - Entry point
* @b: variable
* Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);

	return (pointer);
}
