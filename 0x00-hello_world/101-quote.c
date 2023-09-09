#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: 1 (Success)
 */

int main(void)
{
	char chaine[] = "and that piece of art is useful\" - Dora Korpar,
	    		 2015-10-19\n";

	write(1, chaine, sizeof(chaine) - 1);
	return (1);
}
