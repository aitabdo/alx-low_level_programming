#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: argument/input for this function
 * Return: 0 - when success
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
