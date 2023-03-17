#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "0123456789abcdef
* Return: 0
*/
int main(void)
{
int i;

/* your code goes there */
char l[11] = {"0123456789"};
char n[7] = {"abcdef"};
for (i = 0 ; i < 10 ; i++)
{
	putchar(l[i]);
}
for (i = 0;i < 6; i++)
{
	putchar(n[i]);
}
printf("\n");
return (0);
}
