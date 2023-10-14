#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * op_add - a + b.
 * @a: argument
 * @b: argument
 * Return: int.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a - b.
 * @a: argument
 * @b: argument
 * Return: int.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a * b.
 * @a: argument
 * @b: argument
 * Return: int.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a / b.
 * @a: argument
 * @b: argument
 * Return: int.
 */
int op_div(int a, int b)
{
	if (!b)
	{
		return (0);
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a % b.
 * @a: argument
 * @b: argument
 * Return: int.
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		return (0);
		exit(100);
	}
	return (a % b);
}
