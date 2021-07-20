#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure with types pointer and float
 * @name: Pointer that holds the address to "name"
 * @age: Float that holds the vaule "age"
 * @owner: Pointer that holds the address to "owner"
 * Description: Structure that holds multiple values
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
