#include "main.h"

/**
 * _memcpy - copy n bytes from memory area src to memory area dest
 * @dest: A pointer to destination memory area
 * @src: A pointer to source memory area
 * @n: Number of bytes to copy
 *
 * Return: A pointer to destination memory area(i.e. dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p++ = *src++;
	}
	return (dest);
}
