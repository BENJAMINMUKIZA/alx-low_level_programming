#include "main.h"
#include <stddef.h>
/**
 * _strlen - computes the length of a string
 * @s: pointer to the string to be measured
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
