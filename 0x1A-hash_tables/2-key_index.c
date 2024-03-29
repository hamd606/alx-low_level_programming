#include "hash_tables.h"

/**
 * key_index - gives the calculated index of a key
 * @key: the key, a string
 * @size: the size of the hash table.
 *
 * Return: Index number in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
