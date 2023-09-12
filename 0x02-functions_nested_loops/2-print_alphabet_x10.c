#include <stdio.h>
#include <stdlib.h>


/**
 * print_alphabet_x10 - Entry point of the program
 *
 * Return: 1 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
	
}
