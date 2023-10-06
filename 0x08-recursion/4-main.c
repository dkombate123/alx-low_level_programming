#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _pow_recursion(1, 30);
	printf("%d\n", r);
	r = _pow_recursion(4324, 0);
	printf("%d\n", r);
	r = _pow_recursion(4, 16);
	printf("%d\n", r);
	r = _pow_recursion(5, 5);
	printf("%d\n", r);
	r = _pow_recursion(5, -1);
	printf("%d\n", r);
	r = _pow_recursion(-6, 4);
	printf("%d\n", r);
	return (0);
}
