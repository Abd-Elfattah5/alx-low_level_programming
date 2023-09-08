#include "hash_tables.h"

/**
 * hash_node_delete - freeing a node from the memory
 * Return: none
 * @nd: the node to be freed
*/


void hash_node_delete(hash_node_t *nd)
{
	if (nd->key)
		free(nd->key);
	if (nd->value)
		free(nd->value);
	if (nd)
		free(nd);
}

/**
 * hash_table_delete - freeing a hash table from the memory
 * Return: none
 * @ht: the hash table header
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp2;
	unsigned long int i;
	int h;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		h = 0;
		temp = (ht->array)[i];
		while (temp)
		{
			h = 1;
			temp2 = temp->next;
			hash_node_delete(temp);
			temp = temp2;
		}
		if (!h)
			free((ht->array)[i]);
	}
	free(ht->array);
	free(ht);
}
