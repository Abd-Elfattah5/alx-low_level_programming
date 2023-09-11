#include "hash_tables.h"


shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *my_hash;
	unsigned long int i;

	my_hash = (shash_table_t *) malloc(sizeof(shash_table_t));
	if (my_hash == NULL)
		return (NULL);
	my_hash->size = size;
	my_hash->shead = NULL;
	my_hash->stail = NULL;
	my_hash->array = (shash_node_t **) malloc(sizeof(shash_node_t));
	if (my_hash->array == NULL)
	{
		free(my_hash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		(my_hash->array)[i] = NULL;
	return (my_hash);
}


int shash_sorted_list_update(shash_table_t **ht, shash_node_t **new_node,
		const char *key, const char *value)
{
	shash_node_t *temp = NULL;

	temp = (*ht)->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			free((*new_node)->key);
			free((*new_node)->value);
			free((*new_node));
			return (1);
		}
		temp = temp->snext;
	}
	return (0);
}


int shash_sorted_list_insert(shash_table_t **ht, shash_node_t **new_node,
		const char *key)
{
	shash_node_t *temp = (*ht)->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) > 0)
		{
			(*new_node)->snext = temp;
			(*new_node)->sprev = temp->sprev;
			if (temp->sprev != NULL)
				temp->sprev->snext = *new_node;
			else
				(*ht)->shead = *new_node;
			temp->sprev = *new_node;
			return (1);
		}
		temp = temp->snext;
	}
	(*new_node)->sprev = (*ht)->stail;
	(*ht)->stail->snext = *new_node;
	(*ht)->stail = *new_node;
	return (1);
}


int shash_insert_into_sorted_list(shash_table_t *ht, const char *key,
		const char *value)
{
	shash_node_t *new_node = (shash_node_t *) malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = new_node->snext = new_node->sprev = NULL;
	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return (1);
	}
	else
	{
		if (!shash_sorted_list_update(&ht, &new_node, key, value))
			return (shash_sorted_list_insert(&ht, &new_node, key));
		else
			return (1);
	}
}

int shash_insert_into_array(shash_table_t *ht, const char *key,
		const char *value)
{
	unsigned long int idx = 0;
	shash_node_t *new_node, *old_head;

	new_node = (shash_node_t *) malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = new_node->snext = new_node->sprev = NULL;
	if ((ht->array)[idx] == NULL)
	{
		(ht->array)[idx] = new_node;
		return (1);
	}
	else
	{
		old_head = (ht->array)[idx];
		while (old_head)
		{
			if (strcmp(old_head->key, key) == 0)
			{
				free(old_head->value);
				old_head->value = (char *) strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			old_head = old_head->next;
		}
		old_head = (ht->array)[idx];
		new_node->next = old_head;
		(ht->array)[idx] = new_node;
		return (1);
	}
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	if (!shash_insert_into_array(ht, key, value))
		return (0);
	return (shash_insert_into_sorted_list(ht, key, value));
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *current_node;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);
	if ((ht->array)[idx] == NULL)
		return (NULL);
	current_node = (ht->array)[idx];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}
	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int is_first_hash;

	if (ht == NULL)
		return;
	printf("{");
	is_first_hash = 1;
	current_node = ht->shead;
	while (current_node)
	{
		if (!is_first_hash)
			printf(", ");
		is_first_hash = 0;
		printf("\'%s\': \'%s\'", current_node->key,
				current_node->value);
		current_node = current_node->snext;
	}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int flag;

	if (ht == NULL)
		return;
	printf("{");
	flag = 1;
	temp = ht->stail;
	while (temp)
	{
		if (!flag)
			printf(", ");
		flag = 0;
		printf("\'%s\': \'%s\'", temp->key,
				temp->value);
		temp = temp->sprev;
	}
	printf("}\n");
}

void shash_table_delete_arr(shash_table_t *ht)
{
	shash_node_t *current_node, *previous_node;
	unsigned long int idx, flag;

	for (idx = 0; idx < ht->size; idx++)
	{
		flag = 0;
		current_node = (ht->array)[idx];
		while (current_node)
		{
			flag = 1;
			previous_node = current_node;
			current_node = current_node->next;
			free(previous_node->key);
			free(previous_node->value);
			free(previous_node);
		}
		if (!flag)
			free((ht->array)[idx]);
	}
	free(ht->array);
	free(ht);
}

void shash_table_delete_slist(const shash_table_t *ht)
{
	shash_node_t *current_node, *previous_node;

	if (ht == NULL)
		return;
	current_node = ht->shead;
	previous_node = NULL;
	while (current_node)
	{
		previous_node = current_node;
		current_node = current_node->snext;
		free(previous_node->key);
		free(previous_node->value);
		free(previous_node);
	}
}


void shash_table_delete(shash_table_t *ht)
{
	shash_table_delete_slist(ht);
	shash_table_delete_arr(ht);
}
