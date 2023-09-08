#include "hash_tables.h"

/**
 * key_index - returns the index oof the hash table to put a key in
 * @key: The key
 * @size: size of the array
 *
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int n = 0;
	unsigned long int index = 0;

	n = hash_djb2(key);
	index = n % size;

	return (index);
}
