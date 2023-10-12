#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments for our function.
 * Return: int.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x;
	int sum = 0;
	va_list args;

	va_start(args, n);
	if (!n)
	{
		return (0);
	}
	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
