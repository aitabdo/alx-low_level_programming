#include "main.h"


/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer.
 * @index: index to set 1.
 * Return: int (integer).
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index >= (8 * sizeof(*n)))
		return (-1);
	k = 1;
	*n = *n | (k << index);

	return (1);
}
