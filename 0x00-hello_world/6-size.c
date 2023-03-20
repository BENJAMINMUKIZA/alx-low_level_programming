#include<stdio.h>

/**
 *main - Enter point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
	
	printf("size of a char: %lu bytes\n", sizeof(charType));
	printf("size of an int: %lu bytes\n", sizeof(intType));
	printf("size of a long int: %lu bytes\n", sizeof(longintType));
	printf("size of a long long int: %lu bytes\n", sizeof(longlongintType));
	printf("size of a float: %lu bytes\n", sizeof(floatType));
	return (0);
}
