#include "main.h"
#include<stdio.h>

/**
* main - prints _putchar
*
* Description: using the main function
* this program prints "prints _putchar
* Return: 0
*/

int main(void)
{
	int i;
	char b[9] = "_putchar";

	for (i = 0 ; i < 9 ; i++)
	{
		_putchar(b[i]);
	}
	return (0);
}
