#include <stdio.h>
#include "main.h"
#include<string.h>

/**
 * rev_string - reverses a string
 * @s: argument/input for this function
 * Return: 0 - when success
 */
void rev_string(char *s)
{
	int i;
	int j = strlen(s);
	int tmp;

	j = j - 1;
	for (i = 0; i <= j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j - i];
		s[j] = tmp;
		j--;
	}
}
