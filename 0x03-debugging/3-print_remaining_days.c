#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes adate and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int mont, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 400 == 0))
	{	
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - days);
	}
	else
	{
		if (mont == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 305 - day);
		}
	}
}

