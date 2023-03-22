#include "main.h"
#include<stdio.h>

/**
 * _abs - function to return abs of n
 * @n:  is the int that will use for the argument of the function
 * Return: 0
 */
int int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
		return (0);
}
