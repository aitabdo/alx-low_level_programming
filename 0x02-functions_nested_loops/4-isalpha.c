#include "main.h"
#include<stdio.h>

/**
 * _isalpha - function to check for alphabetic haracters
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	char a[27] = "abcdefghijklmnopqrstuvwxyz";
	char b[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int d = 0;

	for (i = 0 ; i < 26 ; i++)
	{
		if (a[i] != c)
		{
			d = 1;
		}
		else
		{
			d = 0;
		}
	}
	for (i = 0 ; i < 26 ; i++)
	{
		if (b[i] != c)
		{
			d = 1;
		}
		else
		{
			d = 0;
		}
	}
	return (d);
}
