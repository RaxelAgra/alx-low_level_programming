#include "main.h"

/**
 * puts_half - check the code
 *
 * @str: Prints half of a string, then new line
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int i;
	int count = 0;
	int half;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
		count++;
	}

	/*step 2 - get half of count*/
	if (count % 2 == 0)
		half = count / 2;
	else
		half = (count - 1) / 2;

	for (i = half; i < count; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
