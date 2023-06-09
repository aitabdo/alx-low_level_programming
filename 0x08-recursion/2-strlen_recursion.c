#include "main.h"

/**
 * _strlen_recursion - a fucntion that return length of a string
 * @s: argument for this function
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
