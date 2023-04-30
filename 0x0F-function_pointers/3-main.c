#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - print result of simple operation perfomed
 * @argc: number of arguments used by pogram
 * @argv: array of arguments used by program while peforming
 * operation
 * Return: 0 on success
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	int q, w;

	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	q = atoi(argv[1]);
	op = argv[2];
	w = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && q == 0) ||
			(*op == '%' && w == 0))
	{
		printf("Error\n");
		exit(100);
	}
	return (0);
}
