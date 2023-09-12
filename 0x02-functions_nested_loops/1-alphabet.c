#include "main.h"
#include <stdio.h>
#include <stdlib.h>



void print_alphabet(void)
{
	char c ;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
