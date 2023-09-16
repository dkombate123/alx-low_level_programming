#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	c = print_last_digit(59);
	_putchar(c + '0');
	c = print_last_digit(10);
	_putchar(c + '0');
	c = print_last_digit(-594);
	_putchar('0' + c);
	_putchar('\n');
	return (0);
}
