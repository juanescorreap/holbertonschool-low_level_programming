#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function that frees dogs.
 * @d: Pointer that holds the addres to "dog_t"
 * Return: Void.
 * Description: Frees the values held by the struct
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
