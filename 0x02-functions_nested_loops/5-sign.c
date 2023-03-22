#include "main.h"
#include<stdio.h>

/**
 * _islower - function to check for lowercase character
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	if (n < 0)
	{
		_putchar(-);
		return (-1);
	}
	if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
}
