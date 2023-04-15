#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string to standard output
 * @str: pointer to the string to be printed
 *
 * Return: none
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
