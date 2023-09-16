#include "main.h"
#include <limits.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	print_last_digit(59);
	print_last_digit(10);
	c = print_last_digit(-594);
	_putchar('0' + c);
	c = print_last_digit(INT_MIN);
	_putchar('0' + c);
	_putchar('\n');
	return (0);
}
