#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Function that  prints a struct dog
 * @d: Pointer that holds the address to "struct dog"
 * Description: Print strcut
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		if (d->age == NULL)
		{
			d->age = "(nil)";
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}	
