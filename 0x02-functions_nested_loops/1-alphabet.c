#include "main.h"
#include <stdio.h>

/**
* print_alphabet - prints alphabets
* Return: Always 0.
*/
void print_alphabet(void)
{
	char b[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		_putchar(b[i]);
	}
	_putchar('\n');
}
