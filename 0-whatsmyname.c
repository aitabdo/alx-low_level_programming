#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: variable
* @argv: variable pointer
* Return: Always 0 (success)
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	/* we can use printf("%s\n", *argv); */
	printf("%s\n", argv[0]);
	return (0);
}
