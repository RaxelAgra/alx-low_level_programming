#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year
 * taking leap year into account
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 02;
	day = 29;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n". month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}