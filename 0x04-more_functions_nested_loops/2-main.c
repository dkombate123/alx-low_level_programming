#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main()
{
	int a = mul(98, 1024);
	int b = mul(-402, 4096);
	_putchar(a + '0');
	_putchar('\n');
	_putchar(b + '0');
	_putchar('\n');
	return (0);
}
