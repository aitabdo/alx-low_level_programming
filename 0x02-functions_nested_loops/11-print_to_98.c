#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - fun to prints all natural numbers from n to 98
 * @n: is the int that will use for the argument of the function
 * 1st for loop about n<98 ,second for loop for n>98
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = 0 ; i <= 98 - (n) ; i++)
		{
			printf("%d", n + i);
			if (i != 98 - (n))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = 0 ; i <= n - 98 ; i++)
		{
			printf("%d", n - i);
			if (i != n - 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
