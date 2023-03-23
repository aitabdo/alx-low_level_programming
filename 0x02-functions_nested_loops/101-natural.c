#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints sum of all multiples of 3 or 5
 * for loop loops over numbers bellow 1024
 * Return: 0 - when success
 */
int main(void)
{
	int i;
	int summ = 0;
	int summ1 = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0)
		{
			summ = summ + i;
		}
		if (i % 5 == 0)
		{
			summ1 = summ1 + i;
		}
	}
	printf("%d", summ + summ1);
	return (0);
}
