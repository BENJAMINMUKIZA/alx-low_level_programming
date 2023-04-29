#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - count the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
	int count = 0, i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}
	return (count);
}

/**
 * strtow - split a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int count, i, j, k;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	count = count_words(str);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0, k = 0; i < count; i++)
	{
		while (str[k] == ' ')
		{
			k++;
		}
		j = k;
		while (str[j] != ' ' && str[j] != '\0')
		{
			j++;
		}
		words[i] = malloc((j - k + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[i], &str[k], j - k);
		words[i][j - k] = '\0';
		k = j;
	}
	words[i] = NULL;
	return (words);
}
