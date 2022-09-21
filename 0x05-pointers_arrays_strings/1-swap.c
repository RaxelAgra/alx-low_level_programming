#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *
 * @a: Swaps the values of two integers
 * @b: parameter b
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
