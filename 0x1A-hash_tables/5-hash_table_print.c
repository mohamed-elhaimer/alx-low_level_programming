#include "hash_tables.h"
/**
 * hash_table_print - prints hashtable
 * @ht: the hash table you want to print
 */
void hash_table_print(const hash_table_t *ht)
{

unsigned long int i;
hash_node_t *item;
short int co = 0;

if (ht == NULL)
	return;

putchar('{');
for (i = 0; i < ht->size; i++)
{
	item = ht->array[i];
	while (item != NULL)
	{
		if (co)
			printf(", ");

		printf("'%s': '%s'", item->key, item->value);
		item = item->next;

		if (co == 0)
			co = 1;
	}
}
printf("}\n");
}
