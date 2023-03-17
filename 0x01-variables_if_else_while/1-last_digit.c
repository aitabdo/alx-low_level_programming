#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "the number n is positive, zero, or negative
* Return: 0
*/
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is ", n);
	x = n % 10;
	if (x > 5)
	{
		printf("%d and is greater than 5\n", x);
	}
	if (x == 0)
        {
		printf("%d and is 0\n", x);
        }
	if (x < 6 && x != 0)
        {
		printf("%d and is less than 6 and not 0\n", x);
        }
	return (0);
}
