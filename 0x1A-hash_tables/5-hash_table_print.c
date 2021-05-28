#include "hash_tables.h"
/**
 * hash_table_print - This function prints a hash table.
 * @ht: The Hash table.
 *
 * Return: Nothing.
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *list = NULL;
	unsigned long token, j = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (token = 0; token <= (ht->size); token++)
	{
		list = ht->array[token];
		while (list)
		{
			if (j)
			{
				printf(", ");
			}
			printf("'%s':'%s'", list->key, list->value);
			j++;
			list = list->next;
		}
	}
	printf("}\n");
}
