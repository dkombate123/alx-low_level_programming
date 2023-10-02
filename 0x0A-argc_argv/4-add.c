#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int *entier = (int *)malloc((argc - 1) * sizeof(int));
	int somme = 0;
	char *endptr;

	if (argc < 2)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (isalpha(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		entier[i - 1] = strtol(argv[i], &endptr, 10);
	}
	if (*endptr != '\0')
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < argc - 1; i++)
		{
			somme += entier[i];
		}
		printf("%d\n", somme);
	}
	free(entier);
	return (0);
}
