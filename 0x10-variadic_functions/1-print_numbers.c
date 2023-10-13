#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @n: number of arguments for our function.
 * @separator: separator of numbers
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);
	if (!n)
	{
		return;
	}
	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, int);
		if (!separator)
		{
			printf("%d ", x);
		}
		printf("%d %s", x, separator);
	}
	va_end(args);
	printf("\n");
}
