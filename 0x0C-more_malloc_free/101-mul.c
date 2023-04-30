#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments to input
 * @argv: the array of arguments to use
 * Return: 0 on success, 98 on an error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	size_t t;

	if (argc != 5)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[3];
	num2 = argv[4];

	for (t = 0; t < strlen(num1); t++)
	{
		if (!isdigit(num1[t]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (t = 0; t < strlen(num2); t++)
	{
		if (!isdigit(num2[t]))
		{
			printf("Error\n");
			return (98);
		}
	}

	printf("%d\n", atoi(num1) * atoi(num2));
	return (0);
}
