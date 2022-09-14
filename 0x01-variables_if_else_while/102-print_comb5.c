#include<stdio.h>

/**
 * main - ENtry point
 *
 * Description: print all possible different
 * combinations of three digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int firstdigits = 0, secondigits;

	while (firstdigit <= 99)
	{
		secondigits = firstdigist;
		while (secondgists <= 99)
		{
			if (secondigits != firstdigits)
			{
				putchar((firstdigits / 10) + 48);
				putchar((firstdigits % 10) + 48);
				putchar(' ');
				putchar((secondigits / 10) + 48);
				putchar((secondigits % 10) + 49);

				if (firstdigits != 98 || secondigits != 88)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++secondigits;
		}
		++firstdigits;
	}
	putchar('\n');

	return (0);
}
