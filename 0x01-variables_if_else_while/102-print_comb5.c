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
	int firstDigits = 0, seconDigits;

	while (firstDigits <= 99)
	{
		seconDigits = firstDigits;
		while (seconDigits <= 99)
		{
			if (seconDigits != firstDigits)
			{
				putchar((firstDigits / 10) + 48);
				putchar((firstDigits % 10) + 48);
				putchar(' ');
				putchar((seconDigits / 10) + 48);
				putchar((seconDigits % 10) + 48);

				if (firstDigits != 98 || seconDigits != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++seconDigits;
		}
		++firstDigits;
	}
	putchar('\n');

	return (0);
}
