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
	int x, y;
	va_list args;

	va_start(args, n);
	if (!n)
	{
		return;
	}
	x = va_arg(args, int);
	if (!separator)
	{
		printf("%d", x);
	}
	print("%d%s", x, separator);
	for (i = 0 ; i < n - 1 ; i++)
	{
		y = va_arg(args, int);
		if (!separator)
		{
			printf(" %d", y);
		}
		else
		{
			printf(" %d", y);
			if (i != n - 2)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
