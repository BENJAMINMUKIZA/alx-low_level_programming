#include <main.h>
#include <unistd.h>
/**
 * _putchar.c - writes the character c to stdout
 * @c: the character oto print
 *
 * Return:on success 1
 *on error, -1 is returned, errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
