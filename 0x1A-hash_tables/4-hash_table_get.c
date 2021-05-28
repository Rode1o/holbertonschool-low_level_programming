#include "hash_tables.h"
/*
*
*
*
*
*
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *list;
	unsigned long int index = 0;

	if(!ht || !key)
	{
		return(0);
		
	}
	index = key_index((const unsigned char *)key, ht->size);
	list = ht->array[index];

	while(list)
	{
		if(strcmp(list->key, key) == 0)
		{
			return(list->value);
		}
		list = list->next;
	}
	return (0);
}
