#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints
 * @name: name of the person
 *@f:func as parameter
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
