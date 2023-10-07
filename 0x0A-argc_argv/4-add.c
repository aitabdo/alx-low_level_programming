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
	int sum = 0;

	if (argc <= 2)
	{
		printf("0\n");
	}
	else
	{
		for(i = 1 ; i < argc ; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
