#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - check the code
 *@d:var
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %d\n", d->age);
	printf("Breed: %s\n", (d->breed != NULL) ? d->breed : "(nil)");
}
