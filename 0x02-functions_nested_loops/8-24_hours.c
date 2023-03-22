#include "main.h"
#include<stdio.h>

/**
 * jack_bauer - function to print all time
 * @void:  is the void that will use for the argument of the function
 * Return: 0
 */
void jack_bauer(void)
{
	int a[4] = {0, 1, 2};
	int b[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int c[7] = {0, 1, 2, 3, 4, 5};
	int d[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i, j, k, l;

	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (k = 0 ; k < 6 ; k++)
			{
				for (l = 0 ; l < 10 ; l++)
				{
					if (a[i] == 2 && b[j] >= 4)
					{
						break;
					}
					_putchar(a[i] + '0');
					_putchar(b[j] + '0');
					_putchar(':');
					_putchar(c[k] + '0');
					_putchar(d[l] + '0');
					_putchar('\n');
				}
			}
		}
	}
}
