#include "main.h"
/**
 * swap_int - function to swap two number
 *
 * @a: number
 * @b: number
 */
void swap_int(int *a, int *b)
{
	int n1;

	n1 = *a;
	*a = *b;
	*b = n1;

}
