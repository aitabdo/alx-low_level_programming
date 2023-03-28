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
	int i, len, len2;
	char temp;

	len = 0;
	len2 = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	len2 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len2];
		s[len2--] = temp;
	}
}
