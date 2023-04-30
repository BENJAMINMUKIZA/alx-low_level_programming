#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success, 1 if incorrect
 * number of arguments, 2 if negative bytes
 */
int main(int argc, char **argv)
{
	unsigned char *p;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	p = (unsigned char *)main;
	for (i = 0; i < bytes - 1; i++)
		printf("%02x ", *(p + i));
	printf("%02x\n", *(p + i));
	return (0);
}
