#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - check the code
 *@n:var
 *@index:var ind
 *
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int maxIndex = sizeof(n) * 8 - 1;
	unsigned long int mask = 1UL << index;

	if (index > maxIndex)
	{
		return (-1);
	}
	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
