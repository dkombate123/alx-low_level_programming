#include "main.h"
#include <string.h>
/**
 * print_rev - Entry point of the program
 *
 *@s: a string pointer
 * Return: 1 (Success)
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i] + '0');
	}
	_putchar('\n');
}
