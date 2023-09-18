#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n1 = 30, n2 = 47;
	int *p1 = &n1;
	int *p2 = &n2;

	_putchar('a');
	_putchar('=');
	_putchar(*p1 / 10  + '0');
	_putchar(*p1 % 10  + '0');
	_putchar(',');
	_putchar(' ');
	_putchar('b');
	_putchar('=');
	_putchar(*p2 / 10  + '0');
	_putchar(*p2 % 10  + '0');
	_putchar('\n');
	swap_int(p1, p2);
	_putchar('a');
	_putchar('=');
	_putchar(*p1 / 10  + '0');
	_putchar(*p1 % 10  + '0');
	_putchar(',');
	_putchar(' ');
	_putchar('b');
	_putchar('=');
	_putchar(*p2 / 10  + '0');
	_putchar(*p2 % 10  + '0');
	_putchar('\n');
	return (0);
}
