#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse to stdout
 *
 * @s: pointer to the string to be printed in reverse
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		s--;
		putchar(*s);
		len--;
	}
	putchar('\n');
}
