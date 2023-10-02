#include <stdio.h>
#include <stdlib.h>
/**
 *main - principal function
 * @argc: The character to print
 *@argv: argument of main
 *
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);
	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
