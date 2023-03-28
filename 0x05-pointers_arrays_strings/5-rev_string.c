#include <stdio.h>
#include "main.h"
#include<string.h>

/**
 * print_rev - prints a string in reverse
 * @s: argument/input for this function
 * Return: 0 - when success
 */
void print_rev(char *s)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(s[9 - i]);
	}
	_putchar('\n');
}
