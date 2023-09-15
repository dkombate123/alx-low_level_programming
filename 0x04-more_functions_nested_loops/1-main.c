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

int main()
{
	char c;
	int r;
	int a = _isdigit('0');
	int b = _isdigit('a');

	c='0';
	r= _putchar(c);
	_isdigit(r);
	_putchar(':');
	_putchar(' ');
	_putchar(a + '0');
	_putchar('\n');
	c='a';
	r= _putchar(c);
	_isdigit(r);
	_putchar(':');
	_putchar(' ');
	_putchar(b + '0');
	_putchar('\n');
	return (0);
}
