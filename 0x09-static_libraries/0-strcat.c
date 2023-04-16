#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
