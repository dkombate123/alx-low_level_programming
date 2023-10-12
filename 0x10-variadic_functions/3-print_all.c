#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - check the code
 *@format: var2
 *
 * Return: Always
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			char c = (char)va_arg(args, int);

			printf("%s%c", separator, c);
		}
		else if (format[i] == 'i')
		{
			int num = va_arg(args, int);

			printf("%s%d", separator, num);
		}
		else if (format[i] == 'f')
		{
			double num = va_arg(args, double);

			printf("%s%f", separator, num);
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			{
				printf("%s%s", separator, str);
			}
		}
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's')
		{
			separator = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

