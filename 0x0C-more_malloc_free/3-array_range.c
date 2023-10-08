#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - prints buffer in hexa
 * @max: maximum
 * @min: minimum
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int i;
	int *tab = (int *)malloc(sizeof(int) * (max - min + 1));

	if (min > max)
	{
		return (NULL);
	}
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		tab[i] = min + i;
	}
	return (tab);
}
