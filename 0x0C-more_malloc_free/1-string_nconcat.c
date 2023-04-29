#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * @n: Maximum number of bytes to concatenate from s2.
 *
 * Return: Pointer to the concatenated string, or NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2;

	char *result;

	len1 = (s1 != NULL) ? strlen(s1) : 0;

	len2 = (s2 != NULL) ? strlen(s2) : 0;

	if (n >= len2)
	{
		n = len2;
	}
	result = malloc(len1 + n + 1);

	if (!result)
	{
		return (NULL);
	}
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, n);
	result[len1 + n] = '\0';
	return (result);
}
