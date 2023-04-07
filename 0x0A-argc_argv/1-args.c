#include <stdio.h>

/**
 * main - program thats prints the number of arguments that passed
 * @argc: the number of command line arguments
 * @argv: an array of strings containing command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
