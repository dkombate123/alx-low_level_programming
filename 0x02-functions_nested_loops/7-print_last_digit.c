
#include "main.h"
/**
 * print_last_digit - function to return last digit
 * @a: number entry
 *
 * Return: modulo of number (Success)
 */
int print_last_digit(int a)
{
	if (a < 0)
		a = -a;
	return (a % 10);
}
