#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function to initializevariable type dog
 * @d: struct to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->name = age;
	d->owner = owner;
}
