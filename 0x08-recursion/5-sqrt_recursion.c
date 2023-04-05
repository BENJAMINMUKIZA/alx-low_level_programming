#include "main.h"
#include <stdio.h>
/**
 * _sqrt_helper - recursively finds the natural square root of a number
 * @n: the number to find the square root of
 * @low: the lower bound of the search range
 * @high: the upper bound of the search range
 * Return: the natural square root of n, or -1 if n does not have
 * anatural square root
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid;

	if (low > high)
		return (-1);
	mid = (low + high) / 2;
	if (mid * mid == n)
		return (mid);
	if (mid * mid > n)
		return (_sqrt_helper(n, low, mid - 1));
	return (_sqrt_helper(n, mid + 1, high));
}


/**
 * _sqrt_recursion - square root of a number
 *
 * @n: anumber to hold square root
 * Return: _sqrt_recursion(int n)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1, n / 2));
	}
}
