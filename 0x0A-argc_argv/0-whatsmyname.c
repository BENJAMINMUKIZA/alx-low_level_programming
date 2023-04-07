#include <stdio.h>

/**
 * main - program that prints it's name followed by new line
 * @argc: The number of command line arguments
 * @argv: an array of strings containing command lline arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
