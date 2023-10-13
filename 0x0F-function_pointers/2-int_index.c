#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - return index if element find
 * @array: array of the integer to check
 *@size:size array
 *@cmp:var
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
