#include <stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * print_dog -  a function that prints a struct dog.
 * @d: pointer to our struct
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	if (!(d->name))
	{
		d->name = "nil";
	}
	if (!(d->owner))
	{
		d->owner = "nil";
	}
	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner)
}
