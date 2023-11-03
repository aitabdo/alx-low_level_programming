#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: integer.
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int y = 0, j;
	unsigned long int x;

	for (j = 63; j >= 0; j--)
	{
		x = (n >> j) & 1;
		if (x == 1)
			y = 1;
		if (y == 1)
			_putchar(((n >> j) & 1) + '0');
	}
	if (n == 0)
		_putchar('0');
}
