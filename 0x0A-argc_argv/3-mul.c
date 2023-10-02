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
	int entier[3];
	int somme = 1;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		entier[i - 1] = atoi(argv[i]);
	}
	for (i = 0; i < argc - 1; i++)
	{
		somme *= entier[i];
	}
	printf("%d\n", somme);
	return (0);
}
