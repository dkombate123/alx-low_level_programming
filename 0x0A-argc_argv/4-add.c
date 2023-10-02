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
	int entier[argc - 1];
	int somme = 0;
	char *endptr;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		entier[i - 1] = strtol(argv[i], &endptr, 10);
	}
	if (*endptr != '\0')
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc - 1; i++)
	{
		somme += entier[i];
	}
	printf("%d\n", somme);
	return (0);
}
