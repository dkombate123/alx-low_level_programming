#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 *error_exit - check the code
 *@message:var1
 *@exit_code:var2
 *
 */
void error_exit(const char *message, int exit_code)
{
	dprintf(2, "%s\n", message);
	exit(exit_code);
}
/**
 * main - check the code
 *@argv:var1
 *@argc:var2
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int source_fd = open(file_from, O_RDONLY);
	int target_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	char buffer[1024];
	ssize_t bytes_read;

	if (argc != 3)
	{
		error_exit("Usage: cp file_from file_to", 97);
	}
	if (source_fd == -1)
	{
		error_exit("Error: Can't read from file", 98);
	}
	if (target_fd == -1)
	{
		error_exit("Error: Can't write to file", 99);
	}
	while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
	{
		if (write(target_fd, buffer, bytes_read) == -1)
		{
			error_exit("Error: Can't write to file", 99);
		}
	}
	if (bytes_read == -1)
	{
		error_exit("Error: Can't read from file", 98);
	}
	if (close(source_fd) == -1 || close(target_fd) == -1)
	{
		error_exit("Error: Can't close fd", 100);
	}
	return (0);
}

