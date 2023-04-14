#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - using malloc and terminate process if malloc fails
 * @b: The number of bytes to allocate
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
