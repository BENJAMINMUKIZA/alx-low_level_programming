#include "main.h"
/**
 * _strlen - computes the length of a string
 * @s: pointer to the string to be measured
 *
 * Return: the length of the string
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
