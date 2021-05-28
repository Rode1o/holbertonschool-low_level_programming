#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table.
 * @ht: The Hash table.
 *
 * Return: Nothing.
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *list, *temp;
	unsigned long int token;

	if (!ht)
	{
		return;
	}

	for (token = 0; token < ht->size; token++)
	{
		list = ht->array[token];
		while (list)
		{
			temp = list;
			list = list->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
