#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */


int main(void)
{
	char chaine[] = "_putchar";
	int i;

	for (i = 0; chaine[i] != '\0'; i++)
	{
		putchar(chaine[i]);
	}
	putchar('\n');
	return (0);


}


