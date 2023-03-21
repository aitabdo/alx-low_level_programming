#include "main.h"
#include<stdio.h>
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
int _islower(char c)
{
	char a[27] = "abcdefghijklmnopqrstuvwxyz";
	char b[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	bool d = 0;

	for (i = 0 ; i < 26 ; i++)
	{
		if (a[i] == c)
		{
			d = 1;
		}
		if (b[i] == c)
		{
			d = 1;
		}
	}
	return (d);
}
