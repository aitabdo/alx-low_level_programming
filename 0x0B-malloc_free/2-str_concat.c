#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *str_concat - a function that concat s1 and s2
 * @s1: arguments for this function
 * @s2: arguments for this function
 * Return: (Success)
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	char *t;

	while (s1 && s1[len_s1])
	{
		len_s1++;
	}
	while (s2 && s2[len_s2])
	{
		len_s2++;
	}
	t = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!t)
	{
		return (NULL);
	}
	if (s1)
	{
		while (i < len_s1)
		{
			t[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (j < len_s2)
		{
			t[len_s1] = s2[j];
			len_s1++;
			j++;
		}
	}
	t[len_s1 + len_s2] = '\0';
	return (t);
}
