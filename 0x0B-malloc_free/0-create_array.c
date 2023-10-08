#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints array
 * @c: the character
 * @size: the size of the memory to print
 *
 * Return: array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tab = (char *)malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
}
