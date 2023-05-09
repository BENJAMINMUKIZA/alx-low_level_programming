#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Afunction that appends
 * text to the end of a file
 *
 * @filename: Name of the file to be appended to
 * @text_content: A text that is going append to file
 *
 * Return: Always 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int td, num_bytes_written = 0, n = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[n] != '\0')
			n++;
	}

	td = open(filename, O_WRONLY | O_APPEND);
	if (td == -1)
		return (-1);

	if (n > 0)
		num_bytes_written = write(td, text_content, n);

	close(td);

	return (num_bytes_written == n ? 1 : -1);
}
