#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: Astring to be reversed
 *
 * Return: always return 1 if it is, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - a length of a string to return
 * @s: a string to compute the length
 *
 * Return: always 1 on success, 0 if it is not
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - the characetr to be cheked recursiverly by apalandrome
 * @s: string to check the length
 * @i: repeter or iterator
 *
 * @len: Length of the atring used
 * Return: on success 1, an error no 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
