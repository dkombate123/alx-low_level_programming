#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - check the code
 *@n:var
 *@index:var ind
 *
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int maxIndex = sizeof(*n) * 8 - 1;

	if (index > maxIndex)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
