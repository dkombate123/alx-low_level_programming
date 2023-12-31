#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 *create_file - check the code
 *@text_content: var2
 *@filename:var1
 *
 * Return: Always 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	/*ssize_t bytes_written = write(fd, text_content, strlen(text_content));*/
	size_t content_length = strlen(text_content);
	size_t i;

	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; i < content_length; i++)
		{
			if (write(fd, &text_content[i], 1) == -1)
			{
				close(fd);
				return (-1);
			}
		}
	}
	close(fd);
	return (1);
}
