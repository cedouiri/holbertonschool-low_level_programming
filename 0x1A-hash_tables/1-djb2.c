#include "hash_tables.h"

/**
* hash_djb2 - a function that implementing the djb2 algorithm
* @str: a pointer that point to a string
* Return: unsigned long int hash
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
