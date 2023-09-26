#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _memset - prints buffer in hexa
 *@s: the address of memory to renitialize
 *@n: the size of the memory
 *@b: value that will use to fill the block
 *
 * Return: the block
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}
	return (s);
}
