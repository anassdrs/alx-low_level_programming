#include <stdio.h>


/**
 * main -Entry point
 *
 * Description: print alphabet in lowercasethen in uppercase
 *
 * Return: Alys 0 (Sccess)
 *
 **/
int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*prints a - z*/
	while (ch < 'z')
	{
		putchar(ch);
		ch++;
	}
	    /*prints A - Z*/
	while (CH < 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
