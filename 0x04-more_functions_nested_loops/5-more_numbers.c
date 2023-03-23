#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers from 0,14 10 times
 * @void: argument/input for this function
 * Return: 0 - when success
 */
void more_numbers(void)
{
	int a[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			_putchar(a[i] + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
