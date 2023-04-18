#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * init_dog - initializes a dog structure
 * @d: pointer to the dog structure to initialize
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	printf("Dog initialzied: %s, %1.f, Owner:%s\n", d -> name, d -> age, d -> owner);
}
