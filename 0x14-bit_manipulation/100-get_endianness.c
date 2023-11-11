#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "main.h"
/**
 * get_endianness - check the code
 *
 * Return: Always 0.
 */
/**
 *struct union - singly linked list
 * @i: integer
 * @c: points to the next node
 *
 * Description: singly linked list node structure
 */
int get_endianness(void)
{
	union
	{
		uint32_t i;
		uint8_t c[4];
	}
	check;
	check.i = 1;
	return ((check.c[0] == 1) ? 1 : 0);
}
