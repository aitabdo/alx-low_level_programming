#include <stdio.h>
#include<stdlib.h>

/**
 * main - prints numbers(1-100) but for multiples(3,5)prints FizzBuzz
 * @void: argument/input for this function
 * Return: 0 - when success
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
			{
				putchar(' ');
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
