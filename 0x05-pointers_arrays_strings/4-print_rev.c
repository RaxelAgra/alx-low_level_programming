#include "main.h"

/**
 * print_rev - check the code
 *
 * @s: Prints a string in reverse then a new line
 *
 * Return: ALways 0 (Success)
 */

void print_rev(char *s)
{
	int i;
	int count = 0;
	int count_2;
	char rev_s[500];
	int num;
	int c;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
			break;
		count++;
	}

	num = 0;
	count_2 = count;

	while (count)
	{
		rev_s[num] = s[count - 1];
		count--;
		num++;
	}

	/* int c'*/

	for (c = 0; c < count_2; c++)
	{
		if (rev_s[c] == '\0')
			break;
		putchar(rev_s[c]);
	}

	putchar('\n');
}
