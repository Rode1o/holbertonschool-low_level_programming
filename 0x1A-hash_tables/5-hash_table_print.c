#include "hash_tables.h"
/**
 * hash_table_print - This function prints a hash table.
 * @ht: The Hash table.
 *
 * Return: Nothing.
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *list;
	unsigned long token, j = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (token = 0; token < (ht->size); token++)
	{
		if (ht->array[token])
		{
			list = ht->array[token];
			while (list)
			{
				if (j == 0)
				{
					printf("'%s':'%s'", list->key, list->value);
					j++;
				}
				else
					printf(", '%s':'%s'", list->key, list->value);
				list = list->next;
			}
		}
	}
	printf("}\n");
}
