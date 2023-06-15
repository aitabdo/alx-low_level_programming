#include<stdio.h>
#include<stdlib.h>

/**
 * main -  program that prints all arguments it receives, followed by \n;
 * @argc: arguments for this function
 * @argv: argument for main function
 * Return: (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
