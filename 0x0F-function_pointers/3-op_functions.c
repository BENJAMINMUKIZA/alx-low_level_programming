#include "3-calc.h"
/**
 * op_add - returns the sum of a and b
 * @a: the first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the substraction of a and b
 * @a: first integer
 * @b: second integer
 * Return: substract a from b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiplication of a and b
 * @a: first integer
 * @b: second integer
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return division a by b
 * @a: first integer
 * @b: secod integer
 * Return: result of division a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
