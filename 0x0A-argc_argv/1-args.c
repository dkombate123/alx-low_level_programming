#include <stdio.h>
#include <stdlib.h>
/**
 * main - principal function
 * @argc: The character to print
 *@argv: argument
 *
 *Return: On success 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	printf("%d\n", argc - 1);
	return (0);
}
