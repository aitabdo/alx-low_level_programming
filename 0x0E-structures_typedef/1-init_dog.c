#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* init_dog - Entry point
* @d: variable that points to struct dog
* @name: argument
* @age: argument
* @owner: argument
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d = NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
