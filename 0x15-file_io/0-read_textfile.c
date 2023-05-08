#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Afunction that reads a text
 * file and prints it to the POSIX stdout
 * @filename: pointer to the filename of string to read
 * @letters: the number of letters to read/print out
 *
 * Return: the exact number of letters to read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int td;
	ssize_t nm_bytes_read, nm_bytes_written;
	char *bf;

	if (!filename)
		return (0);

	td = open(filename, O_RDONLY);
	if (td == -1)
		return (0);

	bf = malloc(sizeof(char) * letters);
	if (!bf)
		return (0);

	nm_bytes_read = read(td, bf, letters);
	if (nm_bytes_read == -1)
	{
		free(bf);
		close(td);
		return (0);
	}

	nm_bytes_written = write(STDOUT_FILENO, bf, nm_bytes_read);
	if (nm_bytes_written == -1 || nm_bytes_written != nm_bytes_read)
	{
		free(bf);
		close(td);
		return (0);
	}

	free(bf);
	close(td);
	return (nm_bytes_written);
}
