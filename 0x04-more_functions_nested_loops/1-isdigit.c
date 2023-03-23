#include <stdio.h>
#include <stdio.h>

/**
 * _isdigit - checks for a digit between 0,9
 * @c: argument/input for this function
 * Return: 0 - when success
 */
int _isdigit(int c)
{
	int a[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (a[i] == c)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	return (0);
}
