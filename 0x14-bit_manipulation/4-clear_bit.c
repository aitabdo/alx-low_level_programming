#include "main.h"


/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: integer.
 * @index: index to set 1.
 * Return: int [integer (1 success, -1 error)].
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	k = 1;
	k = k << index;
	k = ~k;
	*n = *n & k;

	return (1);
}
