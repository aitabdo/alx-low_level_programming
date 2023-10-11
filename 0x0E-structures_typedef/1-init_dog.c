#include <stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: pointer to our struct
 * @name: dog's name
 * @age: dog'age
 * @owner: dog's owner name
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
