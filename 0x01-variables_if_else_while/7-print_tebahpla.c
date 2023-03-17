#include <stdlib.h>
#include<stdio.h>
#include <time.h>
#include<string.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "the lowercase alphabet in reverse,followed by newline
* Return: 0
*/
int main(void)
{
int i;

/* your code goes there */
char L[27] = {"abcdefghijklmnopqrstuvwxyz"};

for (i = 0; i < 26; i++)
{
	putchar(L[(strlen(L) -1 ) - i]);
}
printf("\n");
return (0);
}
