#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: argument/input for this function
 * Return: 0 - when success
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 0 || n == 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
			{
				if ((j != 0 && i != 0) || i > 0)
				{
					putchar(' ');
				}
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
