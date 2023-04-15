#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
