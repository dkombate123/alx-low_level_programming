#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _memcpy - fonction to copy memory area
 * @dest: the address memory that receive data
 * @src: the address memory that will be duplicate
 *@n:number of bytes to duplicate
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *p = dest;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1 ; j++)
		{
			p[i] = src[j];
		}
	}
	return (dest);
}
