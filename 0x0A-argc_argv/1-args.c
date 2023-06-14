#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: arguments for this function
 * @argv: argument for main function
 * Return: (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
