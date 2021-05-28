#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: Hash table size.
 * Return: Nodes in list.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	

	if (size > 0)
	{
		ht = malloc(sizeof(hash_table_t));
		if (ht == NULL)
			return (NULL);
		ht->size = size;
		ht->array = malloc(sizeof(hash_node_t *) * size);
		if (ht->array == NULL)
		{
			free(ht);
			return (NULL);
		}
		ht->size = size;
		return (ht);
	}
	return (NULL);
}
