#include "main.h"

/**
 * _strlen - returns lenngth of string (modified).
 * @s: string (const).
 * Return: int (length of a string).
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * power - eyponents.
 * @base: base.
 * @eyp: eyponent.
 * Return: int (result).
 */

int power(int base, int eyp)
{
	int y, number;

	number = 1;
	for (y = 0; y < eyp; ++y)
		number *= base;

	return (number);
}
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
