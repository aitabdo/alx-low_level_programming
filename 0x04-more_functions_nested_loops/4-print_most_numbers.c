#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers from 0,9 except 2 and 4
 * @void: argument/input for this function
 * Return: 0 - when success
 */
void print_most_numbers(void)
{
	int a[9] = {0, 1, 3, 5, 6, 7, 8, 9};
	int i;

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(a[i] + '0');
	}
	_putchar('\n');
}
