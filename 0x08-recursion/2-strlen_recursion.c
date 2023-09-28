#include "main.h"
#include<stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: arguments for this function
 * Return: (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return (1 + _strlen_recursion(s + 1));
}
