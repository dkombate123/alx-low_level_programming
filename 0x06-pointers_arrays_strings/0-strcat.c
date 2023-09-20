#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strcat- function to concated two caracter
 *
 *@dest: ch1
 *@src:ch2
 * Return: valide (Success)
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
