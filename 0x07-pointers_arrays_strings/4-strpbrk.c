#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence of a set of bytes in a string
 *
 * @s: A pointer to the string to search
 * @accept: aA pointer to the string containing the bytes to search for
 * Return: Apointer to the bytes in 's' that matches one of the bytes in
 * 'accept', or NULL if no suc byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*p == *s)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
