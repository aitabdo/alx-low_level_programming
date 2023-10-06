#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit between 0,9
 * @c: argument/input for this function
 * Return: 0 - when success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
