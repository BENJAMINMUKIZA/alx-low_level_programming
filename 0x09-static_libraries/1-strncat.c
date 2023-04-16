#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes from src to be concatenated
 *
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
