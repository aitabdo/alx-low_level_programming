#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: format to print
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	char *s;
	int i = 0;
	char *separator = "";
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 's':
					s = va_arg(args, char*);
					if (!s)
					{
						s = "(nil)";
					}
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
