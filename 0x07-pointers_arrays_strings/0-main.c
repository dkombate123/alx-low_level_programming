#include "main.h"
#include <stdio.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[102] = {0x03};
	char buffer1[99] = {1};
	char buffer2[99] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	simple_print_buffer(buffer1, 99);
	_memcpy(buffer + 50, buffer2, 10);
	simple_print_buffer(buffer, 102);
	/*_memset(buffer, 0x02, 100); */
	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 102);
	simple_print_buffer(buffer1, 99);

	return (0);
}
