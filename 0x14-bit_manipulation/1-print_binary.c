#include "main.h"

/**
 * print_binary - Afunction to prints the binary representation of a number
 * @n: The number to print the result
 *
 * Return: return always void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((mask & n) == 0)
	{
		mask >>= 1;
	}

	while (mask != 0)
	{
		if ((mask & n) != 0)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}
