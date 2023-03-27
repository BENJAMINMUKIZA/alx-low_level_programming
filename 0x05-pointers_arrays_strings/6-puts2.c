#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: Pointer to the string to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}