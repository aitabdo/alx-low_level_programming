#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: variable
* @argv: variable pointer
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	/* after argv in the params we can use __attribute__((unused)) as unused arg*/
	printf("%d\n", argc - 1);

	return (0);
}
