#include "main.h"

/**
 * _puts - check the code
 *
 * @str: Prints a string followed by new line
 *	to stdout
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
	/*else*/
		putchar(str[i]);
	}
	putchar('\n');
}
