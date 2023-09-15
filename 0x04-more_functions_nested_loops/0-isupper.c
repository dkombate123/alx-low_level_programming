#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 *
 * Return: 1 (success) if c is uppercase, 0 (failure) otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
