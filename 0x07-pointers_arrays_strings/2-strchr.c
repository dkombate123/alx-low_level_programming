#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strchr - fonction that work like strchr
 * @s: the string
 * @c: caractere to search
 *
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		return (NULL);
}
