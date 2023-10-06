#include<stdio.h>

/**
 * main - Entry point
 *@argc: number of arguments given when running this program.
 *@argv: list of arguments given.
 * Return: Always 0 (Success)
 **/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
