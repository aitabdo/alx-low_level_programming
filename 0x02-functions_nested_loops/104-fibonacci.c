#include<stdlib.h>
#include<stdio.h>

/**
* main - prints fib of n which is 98 here
* for loop loops n-1 which is 97
* Return: 0 - when success
*/
int main(void)
{
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long s = 0;
	int i;

	for (i = 0 ; i <= 97 ; i++)
	{
		s = a + b;
		a = b;
		b = s;
		printf("%lu", s);
		if (i != 97)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
