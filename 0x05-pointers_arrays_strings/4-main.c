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
	char *str = "KOMBATE DANDIEGOU";

	print_rev(str);
	_putchar('\n');
	return (0);
}
