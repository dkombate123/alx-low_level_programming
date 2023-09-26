#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "Kombate";
	char *f;

	f = _strchr(s, 'm');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	printf("\n");
	return (0);
}
