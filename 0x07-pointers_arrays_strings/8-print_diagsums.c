#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: A pointer to the first element of the array
 * @size: The size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("Sum of diagonal elements: %d, %d\n", sum1, sum2);
}
