#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - check the code
 *@av:var
 *@ac:vaer
 *
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int currentIndex = 0;
	int totalLength = 0;
	int i;
	char *result = (char *)malloc((totalLength + 1) * sizeof(char));

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		totalLength += strlen(av[i]) + 1;
	}
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(result + currentIndex, av[i]);
		currentIndex += strlen(av[i]);
		result[currentIndex++] = '\n';
	}
	result[currentIndex] = '\0';
	return (result);
}
