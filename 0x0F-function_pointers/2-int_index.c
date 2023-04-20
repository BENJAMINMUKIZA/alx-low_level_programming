#include "function_pointers.h"
/**
 * int_index - fucntion to search for integer
 * @array: array that holds elements
 * @size: size of an array
 * @cmp: a pointer to compare values
 *
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (a < size)
			{
				if (cmp(array[a]))
					return (a);
				a++;
			}
		}
	}
	return (-1);
}
