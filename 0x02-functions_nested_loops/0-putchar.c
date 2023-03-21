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
	char b[9] = "_putchar";
	int i;

	for (i = 0 ; i < 9 ; i++)
	{
		putchar(b[i]);
	}
	putchar('\n');
	return (0);
}
