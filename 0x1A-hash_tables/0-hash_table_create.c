#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: Hash table size.
 * Return: Nodes in list.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nht = NULL;
	

	if (size > 0)
	{
		nht = malloc(sizeof(hash_table_t));
		if (nht == NULL)
		{
			return (NULL);
		}
		nht->array = calloc(size,sizeof(hash_node_t *));
		if (nht->array == NULL)
		{
			free(nht);
			return (NULL);
		}
		nht->size = size;
		return (nht);
	}
	return (NULL);
}
