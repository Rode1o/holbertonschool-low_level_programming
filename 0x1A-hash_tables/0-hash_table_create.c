#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int token;

	ht = malloc(sizeof(hash_table_t));
	if(!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t*) *size);
	if (!ht->array)
		return (NULL);
	for(token = 0; token < size; token++)
		ht->array[token] = NULL;
	
	return (ht);
}
