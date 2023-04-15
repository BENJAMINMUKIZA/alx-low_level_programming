#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte,
 *           to the buffer pointed to by dest
 * @dest: a pointer to the buffer to copy the string to
 * @src: a pointer to the string to be copied
 *
 * Return: a pointer to the destination string dest
 */
char *_strcpy(char *dest, const char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr++ = *src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
