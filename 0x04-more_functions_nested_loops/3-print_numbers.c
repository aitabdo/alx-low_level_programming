#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0,9
 * @void: argument/input for this function
 * Return: 0 - when success
 */
void print_numbers(void)
{
	int b[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
