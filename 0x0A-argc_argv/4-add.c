#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that add two positive numbers
 * @argc: the number of command line containing arguments
 * @argv: an array of strings containing arguments
 * Return: 0 on successful, on error 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int a, b;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
