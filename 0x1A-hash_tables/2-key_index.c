#include "hash_tables.h"

/**
 * key_index - function to get the index of the key in the hash table
 * Return: the index of the hash table for the key
 * @key: the data key
 * @size: the range of the index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
