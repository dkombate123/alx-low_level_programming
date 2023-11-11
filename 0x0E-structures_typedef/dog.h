#ifndef OBJECT_LIKE_MACRO_H_INCLUDED
#define OBJECT_LIKE_MACRO_H_INCLUDED
/**
 * struct dog - Represents information about a dog
 * @name: Pointer to a character array containing the dog's name
 * @age: The age of the dog as a floating-point number
 * @owner: Pointer to a character array containing the owner's name*
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

