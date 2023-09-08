#include "hash_tables.h"

/**
 * hash_table_print - fucntion to print the hash table
 * Return: none
 * @ht: the table header
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = (ht->array)[i];
		while (temp != NULL)
		{
			if (flag)
				printf(", ");
			printf("\'%s\': \'%s\'", temp->key, temp->value);
			temp = temp->next;
			flag = 1;
		}
	}
	printf("}\n");
}
