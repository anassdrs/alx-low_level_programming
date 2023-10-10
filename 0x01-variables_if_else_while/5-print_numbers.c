#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: print all simple digit numbers
 *
 *  Return: Always 0 (success)
 *
 **/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		print("% i", digit);
		digit++;

	}
	printf(" \n");
	return (0);
}
