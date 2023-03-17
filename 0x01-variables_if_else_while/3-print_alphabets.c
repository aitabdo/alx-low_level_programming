#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "alphabet in lowercase,then uppercase,followed by newline
* Return: 0
*/
int main(void)
{
int i;

/* your code goes there */
char L[100] = {"abcdefghijklmnopqrstuvwxyz"};
char N[100] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

for (i = 0; i < 26; i++)
{
	putchar(L[i]);
}
for (i = 0; i < 26; i++)
{
	putchar(N[i]);
}
printf("\n");
return (0);
}
