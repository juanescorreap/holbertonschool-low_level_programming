#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Function that creates a new dog.
 * Return: newpuppy.
 * @name: Pointer that holds the addres to "name".
 * @age: Variable of type float that holds "age".
 * @owner: Pointer that hold the address to "owner"
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newpuppy;
	int x, c;
	char *copianame, *copiaowner;

	newpuppy = malloc(sizeof(dog_t));
	if (newpuppy == NULL)
		return (NULL);
	for (x = 0; name[x] != '\0'; x++)
	{
	}
	for (c = 0; owner[c] != '\0'; c++)
	{
	}
	copianame = malloc(sizeof(char *) * x + 1);
	if (copianame == NULL)
	{
		free(newpuppy);
		return (NULL);
	}
	copiaowner = malloc(sizeof(char *) * c + 1);
	if (copiaowner == NULL)
	{
		free(copianame);
		free(newpuppy);
		return (NULL);
	}
	for (x = 0; name[x] != '\0'; x++)
	{
		copianame[x] = name[x];
	}
	copianame[x] = '\0';
	for (c = 0; owner[c] != '\0'; c++)
	{
		copiaowner[c] = owner[c];
	}
	copiaowner[c] = '\0';
	newpuppy->name = copianame;
	newpuppy->age = age;
	newpuppy->owner = copiaowner;
	return (newpuppy);
}
