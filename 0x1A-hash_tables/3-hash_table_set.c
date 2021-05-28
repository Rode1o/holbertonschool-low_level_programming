#include "hash_tables.h"
/*
*
*
*
*
*
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *list = NULL;
	unsigned long int index = 0;

	if(!ht || !key || !value)
	{
		return(0);
	}

	new = malloc(sizeof(hash_node_t));
	if(!new)
	{
		return(0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	list = ht->array[index];

	while(list)
	{
		if(strcmp(list->key, key) == 0)
		{
			free(list->value);
			list->value = strdup(value);
			return(1);
		}
		list = list->next;
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return(1);
}
