#include "main.h"
#include <stddef.h>


/**
 * _strstr - Locates a substring in a string
 *
 * @haystack: The string to search in
 * @needle: the substring to search for
 *
 * Return: A pointer to the biginning of the located substring,or NULL ifthe
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
