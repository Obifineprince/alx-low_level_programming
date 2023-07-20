#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints the key-value pairs of a hash table
 * @ht: A pointer to the hash table
 *
 * Description: This function prints the key-value pairs of a hash table.
 * It prints the elements in the order they appear in the array of the hash table,
 * followed by the elements in the linked lists within each array index.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
