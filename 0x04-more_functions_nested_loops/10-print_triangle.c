#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: argument/input for this function
 * Return: 0 - when success
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size < 0 || size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i < size + 1 ; i++)
		{
			for (j = 1 ; j < size + 1 ; j++)
			{
				if (j <= size - i)
				{
					_putchar(' ');
				}
				else if (j > size - i)
				{
					_putchar('#');
				}
			}
			putchar('\n');
		}
	}
}
