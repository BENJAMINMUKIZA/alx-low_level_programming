#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define ERR_WRITE "Error: Can't write to %s\n"
#define ERR_USAGE "Usage: cp file_from file_to\n"
#define ERR_READ "Error: Can't read from file %s\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"

#define BUF_SIZE 1024

/**
 * main - Afunction Copies the content of a file to another file.
 * @argc: Number of arguments inserted in program.
 * @argv: Array of strings inserted to the program.
 *
 * Return: Always return 0 on sucess, 97 to 100 on error
 */
int main(int argc, char **argv)
{
	int td_from, td_to, cl_status, wr_status, rd_status;
	char buf[BUF_SIZE];

	if (argc != 3)
		return (write(STDERR_FILENO, ERR_USAGE, sizeof(ERR_USAGE) - 1), 97);

	td_from = open(argv[1], O_RDONLY);
	if (td_from == -1)
		return (dprintf(STDERR_FILENO, ERR_READ, argv[1]), 98);

	td_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (td_to == -1)
		return (dprintf(STDERR_FILENO, ERR_WRITE, argv[2]), 99);

	rd_status = 1;
	while (rd_status)
	{
		rd_status = read(td_from, buf, BUF_SIZE);
		if (rd_status == -1)
			return (dprintf(STDERR_FILENO, ERR_READ, argv[1]), 98);
		wr_status = write(td_to, buf, rd_status);
		if (wr_status == -1)
			return (dprintf(STDERR_FILENO, ERR_WRITE, argv[2]), 99);
	}

	cl_status = close(td_from);
	if (cl_status == -1)
		return (dprintf(STDERR_FILENO, ERR_CLOSE, td_from), 100);

	cl_status = close(td_to);
	if (cl_status == -1)
		return (dprintf(STDERR_FILENO, ERR_CLOSE, td_to), 100);

	return (0);
}
