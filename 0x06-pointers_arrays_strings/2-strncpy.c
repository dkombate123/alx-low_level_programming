#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strncpy- Entry point of the program
 *
 *@dest:ch1
 *@src:ch2
 *@n:maximum
 * Return:  (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

