#include "hash_tables.h"
/**
 * hash_table_set - This function adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || !*key)
	return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		for (new_node = ht->array[index]; new_node; new_node = new_node->next)
		{
			if (strcmp(new_node->key, key) == 0)
			{
				free(new_node->value);
				new_node->value = strdup(value);
				return (1);
			}
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
