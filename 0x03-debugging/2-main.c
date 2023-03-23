#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * this function returns an integer value to indicate the success or failure
 * of the program. in this case, it always returns 0 to indicate successful
 * program execution
 *
 * Return: Always 0 to indicate successful program execution
 */
int main(void)
{
	int largest;
	int a, b, c;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);
	printf("%d is the largest number\n", largest);
	return (0);
}
