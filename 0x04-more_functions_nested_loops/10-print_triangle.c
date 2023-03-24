#include "main.h"

/**
 * print_triangle - prints a triangle of '#' character with a given size.
 *
 * @size: the size of triangle to print.
 *
 * if size is 0 or less, only a new line is printed.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
