#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * alloc_grid - check the code
 *@width:var
 *@height:vare
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **grid = (int **)malloc(height * sizeof(int *));
	int j;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
