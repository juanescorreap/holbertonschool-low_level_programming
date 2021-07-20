#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - Function that creates a new dog.
 * @name: Pointer that holds the addres to "name"
 * @age: Variable of type float that holds "age"
 * @owner: Pointer that hold the address to "owner"
 * Return: newpuppy.
 * Description: Structure that holds multiple values
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}