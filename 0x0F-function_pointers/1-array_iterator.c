#include <stdio.h>
#include "function_pointers.h"

/**
 *  array_iterator - prints an integer or hex
 * @array: array of integer or hex
 *@size: size of array
 *@action:function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}

