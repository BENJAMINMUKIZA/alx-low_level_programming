#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: A number of arguments pass to  program
 * @argv: An array of strings to represent the arguments
 *
 * Return: 0 Always on success, 1 on error
 */
int main(int argc, char **argv)
{
	int coins, cents, a;
	int values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0, coins = 0; a < 5; a++)
	{
		while (cents >= values[a])
		{
			cents -= values[a];
			coins++;
		}
	}

	printf("%d\n", coins);
	return (0);
}
