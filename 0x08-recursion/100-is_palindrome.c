#include "main.h"
#include<stdio.h>
#include<string.h>

int _is_palindrome(char *s, int i);

/**
 * is_palindrome - a function that returns 1 if *s is a palindrome and 0 if not
 * @s: argument for this function
 * Return: (Success)
 */

int is_palindrome(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_is_palindrome(s, 1));
}

/**
 * _is_palindrome - a function that calculates if *s is palindrome or not.
 * @s: argument for this function
 * @i: argument for this function
 * Return: (Success)
 */

int _is_palindrome(char *s, int i)
{
	if (*s != s[strlen(s) - i])
	{
		return (0);
	}

	if (i == (strlen(s) / 2))
	{
		return (1);
	}
	s++;
	return (_is_palindrome(s, i + 1));

}
