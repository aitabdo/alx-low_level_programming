#include "main.h"


/**
 * flip_bits - returns the number of bits to flip number to another.
 * @n: first integer.
 * @m: second integer.
 * Return: int [number of bits to change "integer"].
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k;
	unsigned int result = 0;

	k = n ^ m;
	while (k)
	{
		result += k & 1;
		k = k >> 1;
	}
	return (result);
}
