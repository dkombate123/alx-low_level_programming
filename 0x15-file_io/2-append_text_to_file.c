#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - check the code
 *@filename:var1
 *@text_content:var2
 *
 * Return: Always 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "a");

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	if (file == NULL)
	{
		return (-1);
	}
	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
