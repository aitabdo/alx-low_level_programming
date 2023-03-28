#include "main.h"
#include<stdio>

/**
 * swap_int - swaps the value of two numbers
 * @a: argument/input for this function
 * @b: argument/input for this function
 * Return: 0 - when success
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
