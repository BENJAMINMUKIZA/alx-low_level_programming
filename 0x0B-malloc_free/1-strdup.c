#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 *
 * @str: The string to duplicate.
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	size_t len;

	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	new_str = malloc(len + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
