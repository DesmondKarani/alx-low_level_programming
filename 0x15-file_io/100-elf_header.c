#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * main - displays the information contained in the ELF header at the start of an ELF file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or 98 on error
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t read_count;
	int i;
	Elf64_Ehdr header;
	/* check argument count */
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	/* open the ELF file */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* read the ELF header */
	read_count = read(fd, &header, sizeof(header));
	if (read_count != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}
	/* check if it's an ELF file */
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file - %s\n", argv[1]);
		close(fd);
		exit(98);
	}
	/* print the ELF header information */
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	printf("Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            UNIX - System V\n");
	printf("ABI Version:                       %d\n", header.e_ident[EI_OSABI]);
	printf("Type:                              %s\n", header.e_type == ET_REL ? "REL (Relocatable file)" : "EXEC (Executable file)");
	printf("Entry point address:               0x%x\n", (unsigned int)header.e_entry);
	/* close the file and return success */
	close(fd);
	return (0);
}
