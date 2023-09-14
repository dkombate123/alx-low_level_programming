#include <stdio.h>
#include "main.h"



/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int leap = is_leap_year(year);
	int remaining_days = 0;

	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}
	if (leap)
	{
		days_in_month[2] = 29;
	}
	if (month == 1)
	{
		remaining_days = days_in_month[1] - day;
	}
	else
	{
		for (int i = month; i <= 12; i++)
		{
			remaining_days += days_in_month[i];
			remaining_days -= day;
		}
		printf("Day of the year: %d\n", day + remaining_days);
		printf("Remaining days: %d\n", 365 + leap - day - remaining_days);
	}
}
