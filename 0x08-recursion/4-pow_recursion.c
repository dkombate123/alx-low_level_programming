#include "main.h"
/**
 *  _pow_recursion - function that operate like pow
 *@x:var
 *@y:var too
 *
 * Return: Always one ore -one or x.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

