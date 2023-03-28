#include <stdio.h>
#include "main.h"
#include<string.h>

/**
 * rev_string - reverses a string
 * @s: argument/input for this function
 * Return: 0 - when success
 */
void rev_string(char *s)
{
	int i;
	int j = strlen(s);

	for (i = 0 ; i < j ; i++)
	{
		_putchar(s[j - 1 - i]);
	}
	_putchar('\n');
}
