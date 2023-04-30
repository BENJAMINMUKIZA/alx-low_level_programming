#include "3-calc.h"
/**
 * op_add - adds two integers or numbers
 * @q: The first integer to add to second one
 * @w: The second integer to add to first one
 *
 * Return: The sum of the two integers
 * that has been added
 */
int op_add(int q, int w)
{
	return (q + w);
}

/**
 * op_sub - subtracts the two integers or numbers
 * @q: The first integer to sub
 * @w: The second integer to subtracted from the first one
 *
 * Return: The difference of the two integers or numbers
 */
int op_sub(int q, int w)
{
	return (q - w);
}

/**
 * op_mul - multiplies two integers or numbers
 * @q: The first integer to multiply to second one
 * @w: The second integer to multiply to firt
 *
 * Return: The product of the two integers we get as result
 */
int op_mul(int q, int w)
{
	return (q * w);
}

/**
 * op_div - divides two integers or numbers
 * @q: The numerator of the function
 * @w: The denominator of the function
 *
 * Return: The result of the division we get
 */
int op_div(int q, int w)
{
	return (q / w);
}

/**
 * op_mod - finds the remainder of the division
 * of two integers or numbers
 * @q: The numerator of the function
 * @w: The denominator or diviser
 *
 * Return: The remainder of the division we get
 */
int op_mod(int q, int w)
{
	return (q % w);
}
