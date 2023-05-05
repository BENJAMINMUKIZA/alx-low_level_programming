#include "main.h"
/**
 * flip_bits - Afunction Returns the number of bits to
 * flip to get from one number to another.
 * @n: The first number to input
 * @m: The second number to input
 *
 * Return: The number of bits to flip always
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x > 0)
	{
		count += (x & 1);
		x >>= 1;
	}

	return (count);
}
