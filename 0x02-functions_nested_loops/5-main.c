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
	int c;

	c = print_sign(100);
	_putchar(',');
	_putchar(' ');
	_putchar(c + '0');
	_putchar('\n');
	c = print_sign(-10);
	_putchar(',');
	_putchar(' ');
	_putchar(c + '0');
	_putchar('\n');
	c = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}
