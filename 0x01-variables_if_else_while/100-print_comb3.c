#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
* main -  prints all possible different combinations of three digits
*
* Description: using the main function
* this program prints "possible different combinations of three digits
* Return: 0
*/
int main(void)
{
int i;
int j;
int k;
int a[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int b[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int c[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

/* your code goes there */
for (i = 0 ; i < 8 ; i++)
{
	for (j = 0 ; j < 9 ; j++)
	{
		if (i < j)
		{
			for (k = 0 ; k < 10 ; k++)
			{
				if (j < k)
				{
					putchar(a[i] + '0');
					putchar(b[j] + '0');
					putchar(c[k] + '0');
					if (a[i] != 7 || b[j] != 8 || c[k] != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
