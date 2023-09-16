#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * _islower - Entry point of the program
 * @c: is the character to check
 *
 * Return: 1 (character) and 0(not character)
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
