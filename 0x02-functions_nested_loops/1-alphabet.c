#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_alphabet - fonction that print lowercase alphabet
 *
 * */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
