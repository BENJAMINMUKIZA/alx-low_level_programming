#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to search for
 *
 * Return: the number of characters in the initial segment of s which consist
 * only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	const char *p;
	const char *a;
	unsigned int count = 0;

	for (p = s; *p != '\0'; p++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*p == *a)
			{
				count++;
				break;
			}
		}
		if (*a == '\0')
		{
			break;
		}
	}
	return (count);
}
