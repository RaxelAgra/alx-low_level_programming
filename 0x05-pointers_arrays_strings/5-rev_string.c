#include "main.h"
#include <stdio.h>

/**
 * rev_str - check the code
 *
 * @s: Reverse a string
 *
 * Return: ALways 0 (Success)
 */

void rev_str(char *s)
{
	int i;
	int count = 0;
	int count_2 = 0;
	char rev_s[1000];
	int num = 0;
	int c;

	for i = 0; ; i++)
	{
		if (s[i] == '\0')
			break;
		count++;
	}

	count_2 = count;

	while (count)
	{
		rev_s[num] = s[count - 1];
		count--;
		num++;
	}

	for (c = 0; c < count_2; c++)
	{
		if (rev_s[c] == '\0')
			break;
		*(s + c) = rev_s[c];
	}
}
