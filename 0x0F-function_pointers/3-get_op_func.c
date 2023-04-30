#include "3-calc.h"

/**
 * get_op_func - function to perform the operation
 * asked by the user
 * @s: operator passed as argument to the program to be perfomed
 *
 * Return: pointer to the function that corresponds to the operator given
 * as a parameter, or NULL if the operator is invalid or not
 */
int (*get_op_func(char *s))(int, int)
{
	int a;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	a = 0;
	while (ops[a].op != NULL)
	{
		if (*(ops[a].op) == *s)
			return (ops[a].f);
		a++;
	}

	return (NULL);
}
