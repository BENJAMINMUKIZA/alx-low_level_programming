#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print alist of numbers separated by a given separator
 * @separator: a string to print between numbers
 * @n: the number of integers to print
 * ...: the integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(args, int));
		if (a != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	va_end(args);

	printf("\n");
}
