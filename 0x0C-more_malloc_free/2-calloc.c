#include "main.h"
#include "stdlib.h"
/**
 * _calloc - ...
 * @nmemb: number of members
 * @size: size
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;

	char *q;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = nmemb * size;
	q = malloc(b);

	if (q == NULL)
		return (NULL);
	while (a < b)
	{
		q[a] = 0;
		a++;
	}
	return (q);
}
