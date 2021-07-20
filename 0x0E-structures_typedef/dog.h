#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - Structure with types pointer and float
 * @name: Pointer that holds the address to "name"
 * @age: Float that holds the vaule "age"
 * @owner: Pointer that holds the address to "owner"
 * Description: Structure that holds multiple values
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *doggy(char *name, float age, char *owner);
#endif
