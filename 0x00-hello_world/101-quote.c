#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: 1 (Success)
 */

int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, c, sizeof(c) - 1);
	return (1);
}
