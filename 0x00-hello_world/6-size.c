#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
 *
*/
int main(void)
{
	print("Size of a char: %1 byte(s)\n", sizeof(char));
	print("Size of an int: %1u byte(s)\n", sizeof(int));
	print("Size of a long int: %1u byte(s)\n", sizeof(long int));
	print("Size of a long long int: %1u byte(s)\n", sizeof(long long int));
	print("Size of aint: %1u byte(s)\n", sizeof(float));
	return (0);
}
