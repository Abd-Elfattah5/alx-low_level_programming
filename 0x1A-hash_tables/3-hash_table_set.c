#include "hash_tables.h"

/**
 * hash_table_set - adding a node to the table
 * Return: 1 if success or 0 otherwise
 * @ht: the table header
 * @key: the key of the value
 * @value: the value of the key
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (*key == '\0')
		return (0);
	new_node = (hash_node_t *) malloc(sizeof(hash_node_t *));

	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	idx = key_index((const unsigned char *) key, ht->size);

	if ((ht->array)[idx] == NULL)
	{
		(ht->array)[idx] = new_node;
		return (1);
	}
	else
	{
		temp = (ht->array)[idx];
		while (temp)
		{
			if (!strcmp(temp->key, key))
			{
				free(temp->value);
				temp->value = strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			temp = temp->next;
		}
		temp = (ht->array)[idx];
		new_node->next = temp;
		(ht->array)[idx] = new_node;
		return (1);
	}
	return (1);
}
