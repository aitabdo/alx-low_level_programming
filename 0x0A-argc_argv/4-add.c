#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *@argc: number of arguments given when running this program.
 *@argv: list of arguments given.
 * Return: Always 0 (Success)
 **/

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] ; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
