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
	char s1[98];
	char *ptr;
	int i;
	unsigned char c;

	for (i = 0; i < 98 - 1; i++)
	{
		s1[i] = '*';
	}
	s1[i] = '\0';
	for (i = 0; s1[i] != '\0'; i++)
	{
		_putchar(s1[i]);
	}
	_putchar('\n');
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	for (i = 0; s1[i] != '\0'; i++)
	{
		_putchar(s1[i]);
	}
	_putchar('\n');
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	for (i = 0; s1[i] != '\0'; i++)
	{
		_putchar(s1[i]);
	}
	for (i = 0; ptr[i] != '\0'; i++)
	{
		_putchar(ptr[i]);
	}
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
		{
			_putchar(' ');
		}
		if (!(i % 10) && i)
		{
			_putchar('\n');
		}
		_putchar('0');
		_putchar('x');
		c = s1[i];
		_putchar((c >> 4) < 10 ? (c >> 4) + '0' : (c >> 4) - 10 + 'a');
		_putchar((c & 0xf) < 10 ? (c & 0xf) + '0' : (c & 0xf) - 10 + 'a');
	}
	_putchar('\n');
	return (0);
}
