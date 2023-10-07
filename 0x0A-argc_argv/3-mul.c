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
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
