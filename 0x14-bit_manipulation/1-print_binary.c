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

	for (int i = bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if ((n & mask) != 0)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	_putchar('\n');
}
