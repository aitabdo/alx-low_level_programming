#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings,followed by a new line.
 * @n: number of arguments for our function.
 * @separator: separator of numbers
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			str = "(nil)";
		}
		if (!separator)
		{
			printf("%s", str);
		}
		else if (separator && i == 0)
		{
			printf("%s", str);
		}

		else
		{
			printf("%s%s", separator, str);
		}
	}
	va_end(args);
	printf("\n");
}
