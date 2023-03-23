#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: argument/input for this function
 * Return: 0 - when success
 */
int _isupper(int c)
{
	char a[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int b = 0;

	for (i = 0 ; i < 26 ; i++)
	{
		if (a[i] == c)
		{
			b = 1;
		}
	}
	return (b);
}
