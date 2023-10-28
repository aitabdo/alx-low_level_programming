#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary.
 * Return: int (unsigned int).
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int len, y;

	sum = 0;
	if (b == NULL)
		return (sum);
	len = _strlen(b);
	for (y = len - 1; y >= 0; y--)
	{
		if (b[y] != '0' && b[y] != '1')
			return (0);
		sum += (b[y] - '0') * power(2, len - y - 1);
	}
	return (sum);
}
