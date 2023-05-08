#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Afunction to creates a file and writes a string to it
 *
 * @filename: the name of the file used to create
 * @text_content: the string to write afunction to the file
 *
 * Return: Always 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int td, count = 0;

	if (filename == NULL)
		return (-1);

	td = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (td == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}

	if (write(td, text_content, count) == -1)
	{
		close(td);
		return (-1);
	}

	close(td);

	return (1);
}
