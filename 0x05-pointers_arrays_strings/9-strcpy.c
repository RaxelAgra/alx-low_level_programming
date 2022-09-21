#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code
 *
 * @dest: parameter
 * @src: parameter2
 *
 * Return: ALways 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
