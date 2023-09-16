
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <limits.h>
/**
 * print_last_digit - function to return last digit
 * @a: number entry
 *
 * Return: modulo of number (Success)
 */
int print_last_digit(int a)
{
	int ld;

       	if (a == INT_MIN)
	{
		ld = 8;
	}
	else
	{
		if (a < 0)
			a = -a;
		ld = a % 10;
	}
	_putchar(ld + '0');
	return (ld);
}
