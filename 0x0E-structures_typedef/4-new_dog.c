#include <stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include "dog.h"

char *_strcpy(char *dest, char *src);
int _strlen(char *s);
/**
 * *_strcpy - copie the string pointed to src
 * @dest: pointer vriable
 * @src: pointer variable
 * Return: void return nothing
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
/**
 * *_strlen - gives a length of string
 * @s: our string
 * Return: length of s.
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
 * new_dog - a function that creates a new dog.
 * @name: dog's name
 * @age: dog'age
 * @owner: dog's owner name
 * Return: Pointer to our function.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	int len_name;
	int len_owner;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	dog1 = malloc(sizeof(dog_t));

	if (dog1 == NULL)
	{
		return (NULL);
	}
	dog1->name = malloc(sizeof(char) * (len_name + 1));
	if (dog1->name == NULL)
	{
		free(dog1);
		free(dog1->name);
		return (NULL);
	}
	dog1->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog1->owner == NULL)
	{
		free(dog1);
		free(dog1->owner);
		return (NULL);
	}
	_strcpy(dog1->name, name);
	_strcpy(dog1->owner, owner);
	dog1->age = age;
	return (dog1);
}
