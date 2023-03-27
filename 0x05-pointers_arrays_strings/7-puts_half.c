#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i, n;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}
	for (i = n; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
