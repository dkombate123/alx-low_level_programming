#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function for malloc and free
 *
 * @b:var
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *pt = malloc(b);

	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}

