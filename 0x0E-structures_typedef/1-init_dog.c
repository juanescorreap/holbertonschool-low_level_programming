#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function that initialize a variable of type struct dog
 * @d: Pointer that holds the address to "struct dog"
 * @name: Pointer that holds the addres to "name"
 * @age: Variable of type float that holds "age"
 * @owner: Pointer that hold the address to "owner"
 * Description: Structure that holds multiple values
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}