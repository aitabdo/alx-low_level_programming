#include "main.h"
#include<stdio.h>

int _is_prime_number(int n, int i);

/**
 * is_prime_number - a function that returns 1 if n is a prime number,else 0.
 * @n: arguments for this function
 * Return: (Success)
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime_number(n, 2));
}

/**
 * _is_prime_number - a function that calculates if n is a prime number.
 * @n: arguments for this function
 * @i: arguments for this function
 * Return: (Success)
 */

int _is_prime_number(int n, int i)
{
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	if (n == i)
	{
		if (n % 1 == 0  && n % n == 0)
		{
			return (1);
		}
	}
	return (_is_prime_number(n, i + 1));
}
