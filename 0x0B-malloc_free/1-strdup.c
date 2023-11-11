#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - check the code
 *@str:var
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	size_t length = strlen(str);
	char *duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
