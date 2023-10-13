#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - addition function
 * @a: The operator
 * @b: The operator
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction function
 * @a: The operator
 * @b: The operator
 *
 * Return: The sub of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication function
 * @a: The operator
 * @b: The operator
 *
 * Return: The mul of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division function
 * @a: The operator
 * @b: The operator
 *
 * Return: The div of a and b.
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
/**
 * op_mod - modulo function
 * @a: The operator
 * @b: The operator
 *
 * Return: The mod of a and b.
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
