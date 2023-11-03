#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char *buffer = (char *)malloc(sizeof(char) * letters);
	ssize_t read_size = fread(buffer, sizeof(char), letters, file);
	ssize_t write_size = write(STDOUT_FILENO, buffer, read_size);

	if (filename == NULL)
	{
		return (0);
	}

	if (file == NULL)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	if (read_size == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	if (write_size < 0 || write_size != read_size)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (read_size);
}
