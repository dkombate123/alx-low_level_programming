#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code
 *@argc:var1
 *@argv:var2
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*calc)(int, int);
	int result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	calc = get_op_func(operator);
	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}
	result = calc(num1, num2);
	printf("%d\n", result);
	return (0);
}
