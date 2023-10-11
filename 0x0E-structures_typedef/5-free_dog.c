#include <stdio.h>
#include<stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * free_dog -  a function that frees dog.
 * @d: pointer to our struct
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
