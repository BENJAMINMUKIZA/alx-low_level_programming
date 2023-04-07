#include <stdio.h>
/**
 * main - program thats print all arguments it recieves
 * @argc: the number of command line Arguments
 * @argv: an array of strings containing the command line arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
