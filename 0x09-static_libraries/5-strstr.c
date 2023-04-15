#include "main.h"
/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to search for
 *
 * Return: pointer to the beginning of the substring in haystack,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;
		p3 = NULL;

		while (*p2 != '\0' && *p1 == *p2)
		{
			p1++;
			p2++;

			if (p3 == NULL && *(p2 - 1) != *(needle))
			{
				p3 = p1 - 1;
			}
		}
		if (*p2 == '\0')
		{
			return (p3);
		}
		haystack++;
	}
	return (NULL);
}
