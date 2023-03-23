#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: argument/input for this function
 * Return: 0 - when success
 */
void print_line(int n)
{
	int i;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
