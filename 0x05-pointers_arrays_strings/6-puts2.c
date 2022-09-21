#include "main.h"

/**
 * puts2 - check the code
 *
 * @str: Prints every other character of string
 *	starting with first, then new line
 *
 * Return: ALways 0 (Success)
 */

void puts2(char *str)
{
	int i;
	int count = 0;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0' || count == 223)
			break;
		putchar(str[i]);
		i++;
		count++;
	}
	putchar('\n');
}

