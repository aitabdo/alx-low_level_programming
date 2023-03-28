#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: argument/input for this function
 * Return: 0 - when success
 */
void rev_string(char *s)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(s[9 - i]);
	}
	_putchar('\n');
}
