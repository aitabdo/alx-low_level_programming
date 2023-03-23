#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit between 0,9
 * @c: argument/input for this function
 * Return: 0 - when success
 */
int _isdigit(int c)
{
	int i;
	int v = 0;
	int b[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0 ; i < 10 ; i++)
	{
		if (b[i] == c)
		{
			v = 1;
		}
	}
	return (v);
}
