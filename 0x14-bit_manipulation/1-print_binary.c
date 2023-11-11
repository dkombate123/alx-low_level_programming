#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - check the code
 *@n:var
 *
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8;
	int i;
	int leadingZero = 1;

	for (i = bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if ((n & mask) != 0 || i == 0)
		{
			leadingZero = 0;
			_putchar('0' + ((n & mask) != 0));
		}
		else if (!leadingZero)
		{
			_putchar('0');
		}
	}
}
