#include<stdlib.h>
#include<stdio.h>

/**
* main - prints fib of n which is 98 here
* for loop loops n-1 which is 97
* Return: 0 - when success
*/
int main(void)
{
	float a = 0;
	float b = 1;
	float s = 0;
	int i;

	for (i = 0 ; i <= 97 ; i++)
	{
		s = a + b;
		a = b;
		b = s;
		printf("%.f", s);
		if (i != 97)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
