#include<stdlib.h>
#include<stdio.h>

/**
* main - prints fib of n
* for loop loops over numbers bellow n-1
* Return: 0 - when success
*/
int main(void)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int s = 0;
	int i;

	for (i = 0 ; i <= 49 ; i++)
	{
		s = a + b;
		a = b;
		b = s;
		printf("%lu", s);
		if (i != 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
