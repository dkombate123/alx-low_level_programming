#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* print_alphabet_x10 - Entry point of the program
*
* Return: 1 (Success)
*/

int main()
{
	char c;
       	int r;
	
	c='C';
	r= _putchar(c);
	_isupper(r);
	_putchar(':');
	_putchar(' ');
	_putchar(r+'0');
	_putchar('\n');
	c='E';
	r= _putchar(c);
	_isupper(r);
	_putchar(':');
	_putchar(' ');
	_putchar(r+'0');
	_putchar('\n');
	c='b';
	r= _putchar(c);
	_isupper(r);
	_putchar(':');
	_putchar(' ');
	_putchar(r+'0'); 
	_putchar(r+'0');
	_putchar('\n');
	return (0);


}
