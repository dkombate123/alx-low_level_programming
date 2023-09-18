
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"
/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 80;
	int *p = &n;
	_putchar('n');
        _putchar('=');
	_putchar(*p / 10 + '0');
	_putchar(*p % 10  + '0');
	reset_to_98(p);
	_putchar('n');
	 _putchar('=');
	_putchar(*p / 10 + '0');
	_putchar(*p % 10  + '0');
	return (0);
}
