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
	int j = strlen(s);

	for (i = 0 ; i < j ; i++)
	{
		_putchar(s[(j - 1 - i)]);
	}
	_putchar('\n');
}
