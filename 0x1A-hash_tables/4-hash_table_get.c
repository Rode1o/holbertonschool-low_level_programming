#include "hash_tables.h"
/**
 * hash_table_get - This function retrieves a value associated with a key.
 * @ht: The Hash table.
 * @key: The key.
 *
 * Return: The value associated with the element, or
 * NULL if key couldn’t be found
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size, index;
	hash_node_t *tmp;

	if (ht == NULL)
	{
		return (NULL);
	}
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	tmp = ht->array[index];
	if (tmp != NULL)
	{
		while (strcmp(tmp->key, strdup(key)) != 0 || tmp == NULL)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			return (NULL);
		}
		else
		{
			return (tmp->value);
		}
	}
	else
	{
		return (NULL);
	}
}
