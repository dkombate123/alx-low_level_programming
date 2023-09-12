#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_alphabet - Entry point of the program
 *
 * Return: 1 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
