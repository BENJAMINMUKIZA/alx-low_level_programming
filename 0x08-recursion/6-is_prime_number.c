#include "main.h"

int actual_prime(int a, int z);
/**
 * is_prime_number - prints if an integer is prime number
 * @a: number to evaluate
 * Return: 1 if a is prime number, 0 other wise
 */
int is_prime_number(int a)
{
	int z = a - 1;

	if (a <= 1)
		return (0);
	return (actual_prime(a, z));
}
/**
 * actual_prime - calculates if anumber is prime recursively
 * @a: number to evaluate
 * @z: iterator
 *
 * Return: 1 if a is prime, 0 otherwise
 */
int actual_prime(int a, int z)
{
	if (z == 1)
		return (1);
	if (a % z == 0 && z > 0)
		return (0);
	return (actual_prime(a, z - 1));
}
