#include "main.h"
#include<stdio.h>
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: arguments for this function
 * Return: (Success)
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	i++;
	_puts_recursion(&s[i]);
}
