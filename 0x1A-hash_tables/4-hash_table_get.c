#include "hash_tables.h"


/**
 * hash_table_get - fucntion to get a value of a table
 * Return: Value on Success of NULL otherwise
 * @ht: the table header
 * @key: the key to look with
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);

	if ((ht->array)[idx] == NULL)
		return (NULL);
	return ((ht->array)[idx]->value);
}
