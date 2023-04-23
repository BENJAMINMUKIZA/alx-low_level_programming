#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters to sum
 * ...: the parameters to sum
 *
 * Return: the sum of all parameters. if n is 0, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
