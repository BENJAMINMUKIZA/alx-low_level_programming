#include "function_pointers.h"
/**
 * array_iterator - array tat hold elements
 * @array: holds elements
 * @size: size of array
 * @action: ...
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
