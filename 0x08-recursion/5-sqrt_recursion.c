#include "main.h"
#include <stdio.h>

/**
 * naturalSquare - function to calcul natural square
 *@n:number one
 *@m:number
 *
 * Return: two value
 */
int naturalSquare(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m > n)
	{
		return (-1);
	}
	else
	{
		return (naturalSquare(n, m + 1));
	}
}
/**
 *_sqrt_recursion - function to calcul natural square
 *@n:number one
 *
 * Return: two value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (naturalSquare(n, 1));
	}
}
