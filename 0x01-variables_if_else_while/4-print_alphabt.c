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

	for (car = 'a' ; car <= 'z'  ; car++)
	{
		if(car !='q' && car !='e')
			putchar (car);
	}
	putchar ('\n');
	return (0);
}
