#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc.
 * @b: how many bytes we want to allocate
 * Return: pointer to memory address .
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (!t)
	{
		exit(98);
	}
	return (t);
}
