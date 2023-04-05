#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of a given number
 * @n: integer to input
 * Return: factorial of n (int)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
