#include <stdio.h>
/**
 * print_before_main - check the code
 *
 * Return: Always void
 */
void print_before_main(void) __attribute__((constructor));

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
