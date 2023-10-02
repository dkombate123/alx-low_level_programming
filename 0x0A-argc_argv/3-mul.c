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
	char *endptr;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		entier[i - 1] = strtol(argv[i], &endptr, 10);
	}
	for (i = 0; i < argc - 1; i++)
	{
		if (*endptr != '\0')
		{
			printf("Erreur de conversion.\n");
		}
		somme *= entier[i];
	}
	printf("%d\n", somme);
	return (0);
}
