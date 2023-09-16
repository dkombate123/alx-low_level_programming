#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;

	c = _isalpha('T');
	_putchar(c + '0');
	c = _isalpha(23);
	_putchar(c + '0');
	c = _isalpha('b');
	_putchar(c + '0');
	c = _isalpha(100);
	_putchar(c + '0');
	c = _isalpha('R');
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}
