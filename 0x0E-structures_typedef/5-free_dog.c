#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog memory allocated for a dog_t struct
 * @d: a Pointer to the dog to the dog_t struct to be freesed
 *
 * Return: void on succesas result
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
