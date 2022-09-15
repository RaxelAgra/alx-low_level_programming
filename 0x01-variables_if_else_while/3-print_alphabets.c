#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a - z */
	while (ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	/*print A - Z */
	while (CH <= 'Z'; CH++)
	{
		putchar(CH);
	}

	return (0);
}
