#include "hash_tables.h"
/**
 * hash_djb2 - Function that retuns an integer
 * upon which the index is to be calculated
 * Return: Integer
 * @str: size of the hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
