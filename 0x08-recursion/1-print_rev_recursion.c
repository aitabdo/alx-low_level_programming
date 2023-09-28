#include "main.h"
#include<stdio.h>

/**
 * _print_rev_recursion - function that prints a rev string, followed by \n.
 * @s: arguments for this function
 * Return: (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
