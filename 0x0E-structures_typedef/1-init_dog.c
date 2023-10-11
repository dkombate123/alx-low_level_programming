#include <stdio.h>
#include <stdlib.h>
#include"dog.h"
 /**
  *init_dog - Initializes a struct dog
  * @d: Pointer to the struct dog to be initialized
  * @name: Pointer to a character array containing the dog's name
  * @age: The age of the dog as a floating-point number
  * @owner: Pointer to a character array containing the owner's name
  *
  * Return: None (void)
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
