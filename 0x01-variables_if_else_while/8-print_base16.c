#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char car;

	for (car = '0' ; car <= '9'  ; car++)
	{
		putchar (car);
	}
	for (car = 'a' ; car <= 'f' ; car++)
	{
		putchar (car);
	}
	putchar ('\n');
	return (0);
}
