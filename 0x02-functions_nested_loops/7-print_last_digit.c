#include "main.h"
#include<stdio.h>

/**
 * print_last_digit - function to print last digit of n
 * first if loop checks if n>0,2nd if n<0
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int n)
{
	int x;

	if (n > 0 || n == 0)
	{
		x = n % 10;
		_putchar (x + '0');
		return (x);
	}
	else
	{
		n = n * -1;
		x = n % 10;
		_putchar (x + '0');
		return (x);
	}
}
