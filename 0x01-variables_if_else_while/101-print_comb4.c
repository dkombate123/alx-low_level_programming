#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int car, car1, car2;

	for (car = 0; car <= 7; car++)
	{
		for (car1 = car + 1; car1 <= 8; car1++)
		{
			for (car2 = car1 + 1; car2 <= 9; car2++)
			{
				putchar(car + '0');
				putchar(car1 + '0');
				putchar(car2 + '0');
				if (car != 7 || car1 != 8 || car2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
