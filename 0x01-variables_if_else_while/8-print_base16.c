#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Sccess)
 *
 **/

int main(void)
{
	char CH = 'a';
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (CH <= 'f')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
