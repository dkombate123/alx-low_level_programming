#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		_putchar(s1[i]);
	}
	_putchar('\n');
	for (i = 0; s2[i] != '\0'; i++)
	{
		_putchar(s2[i]);
	}
	ptr = _strncat(s1, s2, 1);
	for (i = 0; s1[i] != '\0'; i++)
	{
		_putchar(s1[i]);
	}
	_putchar('\n');
	for (i = 0; s2[i] != '\0'; i++)
	{
		_putchar(s2[i]);
	}
	for (i = 0; ptr[i] != '\0'; i++)
	{
		_putchar(ptr[i]);
	}
	_putchar('\n');
	ptr = _strncat(s1, s2, 1024);
	for (i = 0; s1[i] != '\0'; i++)
	{
		_putchar(s1[i]);
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		_putchar(s2[i]);
	}
	for (i = 0; ptr[i] != '\0'; i++)
	{
		_putchar(ptr[i]);
	}
	_putchar('\n');
	return (0);
}
