#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * _isalpha - Entry point of the program
 * @c:check character
 *
 * Return: 1 (is number) 0 (not number)
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
