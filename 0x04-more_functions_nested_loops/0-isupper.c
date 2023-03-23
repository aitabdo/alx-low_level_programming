#include <stdio.h>
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters
 * @c: argument/input for this function
 * Return: 0 - when success
 */
int _isupper(int c)
{
	char a[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		if (a[i] == c)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	return (0);
}
