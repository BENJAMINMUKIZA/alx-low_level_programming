#include <string.h>
#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0, a;

	while (s[len] != '\0')
	{
		len++;
	}
	if (len == 0)
	{
		return (1);
	}
	for (a = 0; a < len / 2; a++)
	{
		if (s[a] != s[len - a - 1])
			return (0);
	}
	return (1);
}
