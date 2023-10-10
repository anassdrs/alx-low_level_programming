#include<stdio.h>

/**
 *  main - Entry point
 *
 *  Description:  print 0-9 using putchar
 *
 *  Return: Always 0 (success)
 *
 **/

int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
	/*convert digit to ASCII representation*/
	putchar(digit);
	digit++;
	}
	putchar('\n');
	return (0);
}
