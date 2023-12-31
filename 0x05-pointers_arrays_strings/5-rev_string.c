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
	int len = strlen(s);
	int start = 0;
	int end = len - 1;

	for (; start < end; start++, end--)
	{
		char temporaire = s[start];

		s[start] = s[end];
		s[end] = temporaire;
	}
}
