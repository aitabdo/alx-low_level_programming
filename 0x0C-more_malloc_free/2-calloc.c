#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *_calloc -  a function that allocates memory for an array, using calloc.
 * @nmemb: size of array
 * @size: size of (type) we want to fill the array with.
 * Return: pointer to memory address .
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	t = calloc(nmemb, size);
	if (!t)
	{
		return (NULL);
	}
	t[nmemb] = '\0';
	return (t);
}
