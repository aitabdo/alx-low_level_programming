#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
* main -  prints all possible different combinations of two digits
*
* Description: using the main function
* this program prints "possible different combinations of two digits
* Return: 0
*/
int main(void)
{
int i;
int j;

/* your code goes there */
int a[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int b[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
for (i = 0 ; i < 9 ; i++)
{
	for (j = 0 ; j < 10 ; j++)
	{
		if (i < j)
		{
			putchar(a[i] + '0');
			putchar(b[j] + '0');
			if (a[i] != 8 || b[j] != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
