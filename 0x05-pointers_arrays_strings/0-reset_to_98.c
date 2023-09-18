#include "main.h"
#include <stddef.h>
/**
 * reset_to_98 - function to changue value with pointer
 *
 *@n:variable pointer
 * Return: to return value
 */
void reset_to_98(int *n)
{
	if (n != NULL)
	{
		*n = 98;
	}
}
