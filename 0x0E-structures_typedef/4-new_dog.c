#include <stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog.
 * @name: dog's name
 * @age: dog'age
 * @owner: dog's owner name
 * Return: Pointer to our function.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t));

	if (!dog1)
	{
		return (NULL);
	}
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;
	return (dog1);
}
