#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Afunction to converts a binary number to an unsigned int
 * @b: Apointer to the string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if There is one or more chars
 * in the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	char a;

	if (b == NULL)
	{
		return (0);
	}
	
	while ((a = *b++) != '\0')
	{
		if (a != '0' && a != '1')
		{
			return (0);
		}
		result = result * 2 + (a - '0');
	}

	return (result);
}
