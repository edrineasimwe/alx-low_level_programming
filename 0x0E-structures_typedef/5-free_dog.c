#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees dog structure
 * @d: pointer to the struct to free
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
