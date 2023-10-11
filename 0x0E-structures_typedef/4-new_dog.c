#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * *new_dog - Entry point
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: pointer if Success, and NULL if Not
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len_name + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}


/**
 * _strlen - Entry point
 * @s: variable
 * Return: i
 */

int _strlen(char *s)
{
	int len_s = 0;

	while (s[len_s] != '\0')
	{
		len_s++;
	}

	return (len_s);
}

/**
 * *_strcpy - Entry point
 * @dest: variable
 * @src: variable
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
