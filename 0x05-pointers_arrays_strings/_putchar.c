#include <unistd.h>


/**
 * _putchar -writes a character to the standard output.
 *
 * @c: the character to be written
 *
 * Return: on success the number of characters written is returned
 * on error, -1 is returned and eerno is set appropriately
 */
int _putchar(char c)
{
	return ((write(1, &c, 1)));
}
