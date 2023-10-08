#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: ptr.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t r = size * nmemb;
	void *ptr = malloc(r);
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, r);
	return (ptr);
}

