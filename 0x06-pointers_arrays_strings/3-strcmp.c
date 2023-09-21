#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strcmp - two string comparaision
 *@s1:ch1
 *@s2:ch2
 * Return: result (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int result = strcmp(s1, s2);

	return (result);
}
