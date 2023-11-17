#include "main.h"

/* @aitabdo..... */
/**
 * get_endianness - function that checks the endianness.
 * Return: int(1 :big endian 0:little endian).
 */

int get_endianness(void)
{
	int i = 1;

	if (*(char *)&i == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
