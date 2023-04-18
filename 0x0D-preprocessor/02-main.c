#include "_putchar.c"
/**
 * main - prints the name of the file it was compiled from,
 * followed by new line
 *
 * Return: ALways 0
 */
int main(void)
{
	char *filename = __FILE__;

	while (*filename)
	{
		_putchar(*filename);
		filename++;
	}
	_putchar('\n');
	return (0);
}
