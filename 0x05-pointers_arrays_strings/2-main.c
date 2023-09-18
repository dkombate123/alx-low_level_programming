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
	int *str = "KOMBATE DANDIEGOU";
	int siz = _strlen(str);

	_putchar(siz / 10 + '0');
	_putchar(siz % 10 + '0');
	_putchar('\n');
	return (0);
}
