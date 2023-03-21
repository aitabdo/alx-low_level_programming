#include "main.h"
#include <stdio.h>
/**
* print_alphabet - 10 times the alphabet
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	char b[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i < 26 ; i++)
		{
			_putchar(b[i]);
		}
	}
	_putchar('\n');
}
