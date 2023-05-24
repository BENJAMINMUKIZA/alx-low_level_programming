#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error - Print error message to stderr and exit with status code 98.
 * @msg: The error message to display.
 */
void print_error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}
/**
 * print_elf_header - Read and print the information from the ELF header.
 * @filename: The name of the ELF file.
 */
void print_elf_header(char *filename)
{
	int fd;
	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Error opening file");
	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error reading ELF header");
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
	printf("  Magic:   %02x %02x %02x %02x\n",
			header.e_ident[EI_MAG0], header.e_ident[EI_MAG1],
			header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("  Class:                             %s\n",
			header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
			header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid");
	printf("  Data:                              %s\n",
			header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid");
	printf("  Version:                           %d (current)\n",
			 header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
			 header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
			 header.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" :
			 header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" : "Other");
	printf("  ABI Version:                       %d\n",
			header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			header.e_type == ET_REL ? "REL (Relocatable file)" :
			header.e_type == ET_EXEC ? "EXEC (Executable file)" :
			header.e_type == ET_DYN ? "DYN (Shared object file)" :
			header.e_type == ET_CORE ? "CORE (Core file)" : "Invalid");
	printf("  Entry point address:               %lx\n",
			(unsigned long)header.e_entry);
	close(fd);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	print_elf_header(argv[1]);

	return (0);
}
