#include "main.h"
#include<stdio.h>

/**
 * _pow_recursion - function that returns the value of x raised to power of y
 * @x: argument for this function
 * @y: argument for this function
 * Return: (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
