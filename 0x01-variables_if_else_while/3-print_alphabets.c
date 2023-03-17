#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "prints the alphabet in lowercase, and then in uppercase, followed by a new line
* Return: 0
*/
int main(void)
{
int i;

/* your code goes there */
char my_list[100] = {"abcdefghijklmnopqrstuvwxyz"};

char my_list_1[100] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

for (i = 0; i < 26; i++)
{
	putchar(my_list[i]);
}
for (i = 0; i < 26; i++)
{
        putchar(my_list_1[i]);
}
printf("\n");
return (0);
}
