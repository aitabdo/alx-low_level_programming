#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	/*your code goes here*/
	char b[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i < 26 ; i++)
		{
			_putchar(b[i]);
		}
		_putchar('\n');
	}
}
