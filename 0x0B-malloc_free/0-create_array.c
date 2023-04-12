#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize it
 * with specific char
 * @size: the size of array to be created
 * @c: the character to initialize array with
 *
 * Return: a pointer or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
