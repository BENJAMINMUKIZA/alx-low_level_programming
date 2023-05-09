#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * main - function to copy the content of a file to another file
 *
 * @argc: number of arguments inserted into a file
 * @argv: array of arguments used in a file
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
        int td_from, td_to, num_bytes_read, num_bytes_written;
        char buf[BUFFER_SIZE];

        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }

        td_from = open(argv[1], O_RDONLY);
        if (td_from == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
        }

        td_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
        if (td_to == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                exit(99);
        }

        while ((num_bytes_read = read(td_from, buf, BUFFER_SIZE)) > 0)
        {
                num_bytes_written = write(td_to, buf, num_bytes_read);
                if (num_bytes_written != num_bytes_read)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                        exit(99);
                }
        }

        if (num_bytes_read == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
        }

        if (close(td_from) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", td_from);
                exit(100);
        }

        if (close(td_to) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", td_to);
                exit(100);
        }

        return (0);
}
