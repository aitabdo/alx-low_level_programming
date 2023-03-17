#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "the last digit of the number stored in the variable n
* Return: 0
*/
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;

	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
        }
	if (x < 6 && x != 0)
        {
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
        }
	return (0);
}
