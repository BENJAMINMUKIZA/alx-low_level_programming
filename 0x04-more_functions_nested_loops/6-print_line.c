#include "main.h"

/**
 * print_line - draws straight line in the terminal using the `_` character.
 * @n: the number of times the `_` should be printed.
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
