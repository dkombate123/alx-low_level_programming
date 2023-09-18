#include "main.h"
#include <string.h>
/**
 * rev_string - function to reverse a string
 *
 * @s: pointer string
 * Return: 0 (Success)
 */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
