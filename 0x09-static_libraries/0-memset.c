#include "main.h"
#include <stddef.h>
/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with constant byte b
 * @s: pointer to the memory area to be filled
 * @b: the bytes to be written to the memory area
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;
	unsigned char c = (unsigned char)b;

	while(n-- > 0)
		*p++ = c;
	return (s);
}
