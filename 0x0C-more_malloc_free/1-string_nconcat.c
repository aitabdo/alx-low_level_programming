#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *string_nconcat -  a function that concatenates two strings.
 * @s1: string 1
 * @s2:string 2
 * @n: number of characters to concat from s2
 * Return: pointer to memory address .
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_s1 = 0, len_s2 = 0;
	char *t;

	while (s1 && s1[len_s1])
	{
		len_s1++;
	}
	while (s2 && s2[len_s2])
	{
		len_s2++;
	}
	if (n >= len_s2)
	{
		n = len_s2;
	}
	t = malloc((len_s1 + n + 1) * sizeof(char));
	if (!t)
	{
		return (NULL);
	}
	for (i = 0 ; i < len_s1 ; i++)
	{
		t[i] = s1[i];
	}
	for (j = 0 ; j < n ; j++)
	{
		t[len_s1 + j] = s2[j];
	}
	t[len_s1 + j] = '\0';
	return (t);
}
