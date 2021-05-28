#ifndef __HASHERS__
#define __HASHERS__


#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*Hash structures*/
/*DATA*/
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;


hash_table_t *hash_table_create(unsigned long int size);

#endif
