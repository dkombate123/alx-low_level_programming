#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>
/**
 * error_exit - check the code
 *@message:var
 *
 */

void error_exit(const char *message)
{
	dprintf(2, "%s\n", message);
	exit(98);
}
/**
 * display_elf_header - check the code
 *@header:var
 *
 *Return: void
 */
void display_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class:%s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ?
			"ELF32" : "ELF64");
	printf("Data:%s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ?
			"2's," : "2's c, big end");
	printf("Version:%d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:%d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:%d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:%d\n", header->e_type);
	printf("Entry point address:0x%lx\n", header->e_entry);
}
/**
 *main - check the code
 *@argc:var
 *@argv:var2
 *
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	const char *file_name = argv[1];
	int fd = open(file_name, O_RDONLY);
	Elf64_Ehdr header;

	if (argc != 2)
	{
		error_exit("Usage: elf_header elf_filename");
	}
	if (fd == -1)
	{
		error_exit("Error: Could not open the file");
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		error_exit("Error: Could not read ELF header");
	}
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		error_exit("Error: Not an ELF file");
	}
	display_elf_header(&header);
	close(fd);
	return (0);
}

