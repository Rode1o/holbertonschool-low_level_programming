#include "hash_tables.h"
/**
 * hash_table_print - This function prints a hash table.
 * @ht: The Hash table.
 *
 * Return: Nothing.
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp = NULL;
	char *c = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				printf("%s'%s': '%s'", c, tmp->key, tmp->value);
				c = ", ";
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
