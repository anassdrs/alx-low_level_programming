#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - entry point
 *
 * Description: positive or negative
 * 
 * Return : 0(success)
 *
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf(" % i positive \n", n);
	else if (n == 0)
		printf(" % i  zero \n", n);
	else
		printf(" % i  negative \n", n);
	return (0);
}
