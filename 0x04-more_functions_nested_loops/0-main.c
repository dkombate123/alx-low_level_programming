#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *  * main - Entry point of the program
 *   *
 *    * Return: 0 (Success)
 *     */

/**
 *  * print_alphabet_x10 - Entry point of the program
 *   *
 *    * Return: 1 (Success)
 *     */

int main()
{
	char c;
       	int r;
	
	c='A';
	r= _putchar(c);
	_isupper(r);
	_putchar(':');
	_putchar(' ');
	_putchar(r+'0');
	_putchar('\n');
	c='a';
	r= _putchar(c);
	_isupper(r);
	_putchar(':');
	_putchar(' ');
	_putchar(r+'0');
	_putchar('\n');
	return (0);


}
