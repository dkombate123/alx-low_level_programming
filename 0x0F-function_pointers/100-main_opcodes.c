#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *@argc:Var1
 *@argv:var2
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int bytesnum;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytesnum = atoi(argv[1]);
	if (bytesnum < 0)
	{
		printf("Error\n");
		exit(1);
	}
	unsigned char *main_ptr = (unsigned char *)main;

	for (i = 0; i < bytesnum; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < bytesnum - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

