#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8,9
* Return: 0
*/
int main(void)
{
int i;

/* your code goes there */
int L[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

for (i = 0 ; i < 9 ; i++)
{
	putchar(L[i] + '0');
	putchar(',');
	putchar(' ');
}
putchar(L[9] + '0');
printf("\n");
return (0);
}
