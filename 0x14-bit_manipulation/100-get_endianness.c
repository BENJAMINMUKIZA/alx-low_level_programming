#include "main.h"
/**
 * get_endianness - Write a function to Checks the endianness of the machine.
 *
 * Return: Always 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *c = (char *)&t;

	if (*c)
		return (1);
	else
		return (0);
}
