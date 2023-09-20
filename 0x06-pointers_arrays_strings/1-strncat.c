#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - function to concat chaine with control
 *
 *@dest:ch1
 *@src:ch2
 *@n: maximum caratere
 * Return: dest (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
