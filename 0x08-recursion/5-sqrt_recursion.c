#include "main.h"
#include<stdio.h>

int sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - a function that returns the natural square root of n.
 * @n: arguments for this function
 * Return: (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion - a function that calculate till it reaches square root of n.
 * @i: argument for this function
 * @n: argument for this function
 * Return: (Success)
 */

int sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_recursion(n, i + 1));
}
