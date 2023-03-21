#include<stdio>
#include<unistd>

/**
* main - prints _putchar
*
* Description: using the main function
* this program prints "prints _putchar
* Return: 0
*/

int main(void)
{
	char b[9] = "_putchar";
	int c = write(1, &b, 9);

	return (c);
	return (0);
}
