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

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
