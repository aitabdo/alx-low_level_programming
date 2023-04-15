#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
* *_calloc - Entry point
* @nmemb: variable
* @size: variable
* Return: pointer if Success, and NULL if Not
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = (char *) malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	memset(p, 0, nmemb * size);

	return (p);
}
