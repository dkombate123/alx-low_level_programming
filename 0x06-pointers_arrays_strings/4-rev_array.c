#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * reverse_array - fonction to reverse array
 *
 *@a : var1 array
 *@n: size of array
 * Return: no (Success)
 */
void reverse_array(int *a, int n)
{
	int i, num, divisor;

	for (i = n - 1; i >= 0; i--)
	{
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		num = a[i];
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		divisor = 1;
		while (num / divisor >= 10)
		{
			divisor *= 10;
		}
		while (divisor != 0)
		{
			int digit = (num / divisor) % 10;

			_putchar('0' + digit);
			divisor /= 10;
		}
	}
}
