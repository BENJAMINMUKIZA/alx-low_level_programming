#include "main.h"
/**
 * _strncpy - copies a string up to a specified number of characters
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of characters to be copied
 *
 * Return: pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
