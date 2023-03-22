#include "main.h"
#include<stdio.h>

/**
 * print_last_digit - function to print last digit of n
 * @n:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n % 10 + '0');
	return (n % 10);
}
